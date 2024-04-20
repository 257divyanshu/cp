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