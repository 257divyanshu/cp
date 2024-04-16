#include <iostream>
using namespace std;

// HEADER FILES
// are also containers
// but they are not as simple as namespaces
// header files are more complicated than namespaces
// but header files are very very important
// we cannot take input output without the help of iostream header files
// store c++ variables, functions etc to be shared with multiple files
// pre-existing header files : files provided by compiler for variety of purposes
// user-defined header files : files written by the user, can be used for templates, or make code less complex
// header files for competetive programming : #include <bits/stdc++.h>
// pros of cc header files : includes standard library and STL headers , thus saves time
// cons of cc header files : increases compile time (doesn't matter for cp) , doesn't work with compilers other than GNU C++

// NAMESPACES
// a namespace is a scope of the program that can store various useful functions and variables
// two ways to use namespaces:
// - use scope resolution operator :: to use the values inside the namespace
// - type using namespace name; 
// namesapces are used avoid conflicting names
// we can also have functions inside namespace
// namespaces are quite useless
// classes are namespaces are completely different
// if we are importing multiple files, namespaces come handy, without namespace code won't work properly if the imported files have some same name content
// namespace xyz{
//     int a = 2;
//     string greet = "hello";
// };
// namespace abc{
//     int a = 1;
// }
// using namespace xyz;
// int main()
// {
//     // one way
//     // cout<<xyz::a<<endl;
//     // cout<<xyz::greet<<endl;
//     // second way
//     // cout<<a<<endl;
//     // cout<<greet<<endl;
//     // another example (conflictin names)
//     cout<<xyz::a<<endl;
//     cout<<abc::a<<endl;
//     return 0;
// };

// ARRAYS
// is a collection of multiple items of the same datatype
// arrays are ordered
// the size of an array cannot be changed (this is a big drawback of array)
// arrays are faster, and consume less memory 
// vectors are dynamic
// EXAMPLE 1 (CREAING AN ARRAY OF DESIRED SIZE AND FILLING DATA INTO IT)
// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     cout<<"size of array is "<<sizeof(arr)<<endl;
//     cout<<"insert data : ";
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//     };
//     cout<<endl;
//     cout<<"array contains the elements: ";
//     for(int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     return 0;
// };
// EXAMPLE 2 (for each loop)
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     for(int num : arr)
//     {
//         cout<<num<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// LOOPS
// are used to repeat a block of code until some condition is satisfied
// types of loops: for , while , do-while
// iteration is one time execution of loop
// break statement exits in current/innermost loop
// continue statement skips to the next iteration of the current/innermost loop when executed
// {} for default value
// {val} for value = val
// for loop doesn't need a semi-colon at the end
// while loop doesn't need a semi-colon at the end
// do while loop needs a semi-colon at the end 
// EXAMPLE 1
// int main()
// {
//     int i{5};
//     int j{}; // initialized with default (default for integers is 0)
//     string str{}; // initialized with default (default for string is empty)
//     cout<<str<<endl;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     return 0;
// };
// EXAMPLE 2
// int main()
// {
//     int i = 0; 
//     int n = 10;
//     do
//     {
//         cout<<"i is "<<i<<endl;
//     } while (i++<n);
    
//     return 0;
// };

// SCOPE
// is a region of program
// every pair of curly braces creates a new scope
// variables inside a scope cannot be used outside the scope, but the variables outside the scope can be used inside the scope
// global scope : outside any function
// scope resolution operator for accessing something that is global
// in the global scope we are allowed to create variables
// we are not allowed to edit variables (in global scope)
// we cannot print anything, we cannot take input also (in global scope)
// we can change a global variable value in some local space (it's allowed)
// the global scope is allocated more memory that the local scope
// in global scope we can declare a larger array size in comparison to local array
// 1e8 = 1*(10^8)
// 2e8 = 2*(10^8)
// EXAMPLE 1
// int x = 99;
// int main()
// {
//     cout<<"Mission Placement"<<endl;
//     int a = 1;
//     if(a == 1)
//     {
//         int a = 8;
//         int b = 2;
//         cout<<"a is "<<a<<endl;
//         if(b == 2)
//         {
//             int a = 9;
//             int c = 3;
//             cout<<"c is "<<c<<endl;
//             cout<<"a is "<<a<<endl;
//             cout<<"x is "<<::x<<endl;
//         };
//     };
//     return 0;
// };
// if we declre an array with size 10^7 