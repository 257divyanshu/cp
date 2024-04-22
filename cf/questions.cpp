

// PERMUTATIONS WITH ARRAY
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
// one method is to use arrays :
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> vect1(0);
//     vector<int> vect2(0);
//     for (int i = 1; i <= n; i++)
//     {
//         int num;
//         cin >> num;
//         vect1.push_back(num);
//     };
//     for (int i = 1; i <= n; i++)
//     {
//         int num;
//         cin >> num;
//         vect2.push_back(num);
//     };
//     sort(vect1.begin(), vect1.end());
//     sort(vect2.begin(), vect2.end());
//     if (vect1 == vect2)
//     {
//         cout << "yes" << endl;
//     }
//     else
//     {
//         cout << "no" << endl;
//     };
//     return 0;
// };
// second method is to use maps
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     map<int, int> map1;
//     map<int, int> map2;
//     for (int i = 1; i <= n; i++)
//     {
//         int num;
//         cin >> num;
//         map1[num]++;
//     };
//     for (int i = 1; i <= n; i++)
//     {
//         int num;
//         cin >> num;
//         map2[num]++;
//     };
//     if (map1 == map2)
//     {
//         cout << "yes" << endl;
//     }
//     else
//     {
//         cout << "no" << endl;
//     };
//     return 0;
// };

// FIBONACCI
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     long long fibo[n];
//     fibo[0] = 0;
//     if (n != 1)
//     {
//         fibo[1] = 1;
//     };
//     for (int i = 2; i < n; i++)
//     {
//         fibo[i] = fibo[i - 1] + fibo[i - 2];
//     };
//     cout << fibo[n - 1] << endl;
//     return 0;
// };

// Watermelon
// https://codeforces.com/problemset/problem/4/A

// Ali Baba and The Puzzles
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long a,b,c,d;
//     cin>>a>>b>>c>>d;
//     string output = "NO";
//     if(a+b*c==d) output = "YES";
//     if(a+b-c==d) output = "YES";
//     if(a-b+c==d) output = "YES";
//     if(a-b*c==d) output = "YES";
//     if(a*b-c==d) output = "YES";
//     if(a*b+c==d) output = "YES";
//     cout<<output<<endl;
//     return 0;
// };

// Memo and Momo
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long a,b,k;
//     cin>>a>>b>>k;
//     if(a%k==0)
//     {
//         if(b%k==0)
//         {
//             cout<<"Both"<<endl;
//         }
//         else
//         {
//             cout<<"Memo"<<endl;
//         };
//     }
//     else
//     {
//         if(b%k==0)
//         {
//             cout<<"Momo"<<endl;
//         }
//         else
//         {
//             cout<<"No One"<<endl;
//         };
//     };
//     return 0;
// };

// Max and min
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maxi = a;
//     if(b>maxi)
//     {
//         maxi = b;
//     };
//     if(c>maxi)
//     {
//         maxi = c;
//     };
//     int mini = a;
//     if(b<mini)
//     {
//         mini = b;
//     };
//     if(c<mini)
//     {
//         mini = c;
//     };
//     cout<<mini<<" "<<maxi<<endl;
//     return 0;
// };

// Comparison
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     char c;
//     cin >> a >> c >> b;
//     if (c == '<')
//     {
//         if (a < b)
//         {
//             cout << "Right" << endl;
//         }
//         else
//         {
//             cout << "Wrong" << endl;
//         };
//     }
//     else if (c == '=')
//     {
//         if (a == b)
//         {
//             cout << "Right" << endl;
//         }
//         else
//         {
//             cout << "Wrong" << endl;
//         };
//     }
//     else
//     {
//         if (a > b)
//         {
//             cout << "Right" << endl;
//         }
//         else
//         {
//             cout << "Wrong" << endl;
//         };
//     };
//     return 0;
// };

// The Brothers
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
// #include <iostream>
// using namespace std;
// int main()
// {
//     int f1,f2,s1,s2;
//     cin>>s1>>f1>>;
//     cin>>s2>>f2>>;
//     if(s1==s2)
//     {
//         cout<<"Brothers";
//     }
//     else
//     {
//         cout<<"Not brothers"
//     }
//     return 0;
// };

// Digits Summation
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
// #include <iostream>
// using namespace std;
// int main() {
// 	long long a, b;
// 	cin>>a>>b;
// 	cout<<(a%10)+(b%10)<<endl;
//     return 0;
// };
// problem with the my initial code was I was using int in place of long long
// moral : read the inputs carefully

// Multiples
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
// #include <iostream>
// using namespace std;
// int main() {
// 	int a, b;
// 	cin>>a>>b;
// 	if(a%b==0 || b%a==0)
// 	{
// 	    cout<<"Multiples"<<endl;
// 	}
// 	else
// 	{
// 	    cout<<"No Multiples"<<endl;
// 	};
//     return 0;
// };

// Welcome for you with Conditions
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int a, b;
// 	cin>>a>>b;
// 	if(a>=b)
// 	{
// 	    cout<<"Yes"<<endl;
// 	}
// 	else
// 	{
// 	    cout<<"No"<<endl;
// 	};
//     return 0;
// };