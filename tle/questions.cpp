// ------
// WEEK 4
// ------

// EVENT ARRAY
// https://codeforces.com/problemset/problem/1367/B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int ei = 0, oi = 0, ee = 0, oe = 0, sc = 0;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[j];
//             if (j % 2 == 0)
//             {
//                 ei++;
//             }
//             else
//             {
//                 oi++;
//             };
//             if (arr[j] % 2 == 0)
//             {
//                 ee++;
//             }
//             else
//             {
//                 oe++;
//             };
//             if (j % 2 != arr[j] % 2)
//             {
//                 sc++;
//             };
//         };
//         if (ee != ei || oe != oi)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << sc / 2 << endl;
//         };
//     };
//     return 0;
// };

// THREE NUMBERS
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int max, sum;
//     cin >> max;
//     cin >> sum;
//     int count = 0;
//     for (int i = 0; i <= max; i++)
//     {
//         for (int j = 0; j <= max; j++)
//         {
//             if (i + j <= sum)
//             {
//                 if ((sum - j - i) <= max)
//                 {
//                     count++;
//                 };
//             };
//         };
//     };
//     cout << count << endl;
//     return 0;
// };

// BEAUTIFUL YEAR
// https://codeforces.com/problemset/problem/271/A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int switchint = 1;
//     n++;
//     while (switchint)
//     {
//         set<int> set1;
//         int m = n;
//         while (m != 0)
//         {
//             set1.insert(m % 10);
//             m /= 10;
//         };
//         if (set1.size() == 4)
//         {
//             switchint = 0;
//             break;
//         }
//         else
//         {
//             n++;
//         };
//     };
//     cout << n << endl;
//     return 0;
// };

// ------
// WEEK 3
// ------

// RVISION REMAINING

// ------
// WEEK 2
// ------

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