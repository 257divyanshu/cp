#include <bits/stdc++.h>
using namespace std;

// setprecision stl function
int main()
{
    double a = 1234.1234;
    cout<<a<<endl;
    cout<<fixed<<setprecision(10)<<a<<endl;
    return 0;
};

// INT_MAX + 1 takes us back to INT_MIN

// range of datatypes
// int from -2^31 to 2^31-1
// long int : almost always same as int
// long long : -2^63 to 2^63 - 1
// float 7 digits precision
// double 15 digits precision
// long double 18 digits precision

// using a void solve() function eliminates the need of flags

// we can use a return statement in a void function also

// a function cannot return an array directly
// we can make it return a pointer to an array
// we can make it return a vector

// it's not a compulsion for a function to take arguments

// declaring an array
// int main()
// {
//     int arr1[] = {1,2,3,4}; 
//     int arr2[4] = {5,6,7,8};
//     return 0;
// };

// if the int main function is not returning anything then this won't cause any problem but another function have a particular return type dtp doesn't return a value of type dtp then this would lead to problem

// main function is not similar to other functions
// so if it doesn't return 0, problems won't occur
// but this behavior is compiler dependent
// so safer option is to always use have a return statement

// VOID FUNCTION
// - can have a return keyword
// - but it shouldn't return anything
// void squareFunc(int n)
// {
//     cout<<(n*n)<<endl;
//     return;
// }
// int main()
// {
//     int n;
//     cout<<"Cout enter the number: ";
//     cin>>n;
//     cout<<"Its square is ";
//     squareFunc(n);
//     return 0;
// };