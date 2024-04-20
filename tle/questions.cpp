

// WATERMELON
// https://codeforces.com/problemset/problem/4/A
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==2 || n%2==1)
//     {
//         cout<<"NO"<<endl;
//     }
//     else
//     {
//         cout<<"YES"<<endl;
//     };
//     return 0;
// };

// MAX AND MIN
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin>>a>>b>>c;
//     int mini = a;
//     int maxi = a;
//     if(b<mini)
//     {
//         mini = b;
//     };
//     if(c<mini)
//     {
//         mini = c;
//     };
//     if(b>maxi)
//     {
//         maxi = b;
//     };
//     if(c>maxi)
//     {
//         maxi = c;
//     };
//     cout<<"mini is "<<mini<<" maxi is "<<maxi<<endl;
//     return 0;
// };

// DIGITS SUMMATION
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F 
// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned long long int a,b;
//     cin>>a>>b;
//     cout<<(a%10)+(b%10)<<endl;
//     return 0;
// };

// BROTHERS
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string fn1,sn1,fn2,sn2;
//     cin>>fn1>>sn1>>fn2>>sn2;
//     if(sn1==sn2)
//     {
//         cout<<"ARE Brothers";
//     }
//     else
//     {
//         cout<<"NOT";
//     };
//     return 0;
// };
// using pair<string,string> gave 77ms
// using only strings gave 77ms