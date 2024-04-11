

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

// COMPARISON
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     char o;
//     cin>>a>>o>>b;
//     if(o=='>')
//     {
//         if(a>b)
//         {
//             cout<<"Right"<<endl;
//         }
//         else
//         {
//             cout<<"Wrong"<<endl;
//         };
//     }
//     else if (o=='=')
//     {
//         if(a==b)
//         {
//             cout<<"Right"<<endl;
//         }
//         else
//         {
//             cout<<"Wrong"<<endl;
//         };
//     }
//     else
//     {
//         if(a<b)
//         {
//             cout<<"Right"<<endl;
//         }
//         else
//         {
//             cout<<"Wrong"<<endl;
//         };
//     };
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

// MULTIPLES
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     if(a%b==0 || b%a==0)
//     {
//         cout<<"Multiples";
//     }
//     else
//     {
//         cout<<"No Multiples";
//     };
//     return 0;
// };

// WELCOME FOR YOU WITH CONDITIONS
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A,B;
//     cin>>A>>B;
//     if(A>=B)
//     {
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     };
//     return 0;
// };