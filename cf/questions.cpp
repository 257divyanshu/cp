
// MARK THE DUST SWEEPER
// https://codeforces.com/problemset/problem/1705/B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int tc = 0; tc < t; tc++)
//     {
//         int n;
//         cin>>n;
//         vector<int> vect(n);
//         for(int i = 0; i<n; i++)
//         {
//             cin>>vect[i];
//         };
//         int zeroCount = 0;
//         int flag = 0;
//         long long sum = 0;
//         for(int i = 0; i<n-1; i++)
//         {
//             sum+=vect[i];
//             if(vect[i]>0){
//                 flag = 1;
//             };
//             if(vect[i]==0 && flag==1)
//             {
//                 zeroCount++;
//             };
//         };
//         cout<<sum+zeroCount<<endl;
//     };
// };

// EVERYONE LOVES TO SLEEP
// https://codeforces.com/contest/1714/submission/258189083
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i = 0; i<t; i++)
//     {
//         // cout<<"test case number "<<i+1<<endl;
//         int n;
//         cin>>n;
//         int wh, wm;
//         cin>>wh>>wm;
//         // cout<<"wh is "<<wh<<" wm is "<<wm<<endl;
//         vector<pair<int,int>> resultVector;
//         for(int j = 0; j<n; j++)
//         {
//         // cout<<"timer "<<j+1<<endl;
//             int gh, gm;
//             cin>>gh>>gm;
//             pair<int,int> p1;
//             p1.first = (gh-wh+24)%24;
//             p1.second = (gm-wm+60)%60;
//             if(gm<wm)
//             {
//                 p1.first--;
//             };
//             p1.first = (p1.first+24)%24;
//             p1.second = (p1.second+60)%60;
//             // cout<<"pushing "<<p1.first<<" "<<p1.second<<endl;
//             resultVector.push_back(p1);
//         };
//         auto it = min_element(resultVector.begin(),resultVector.end());
//         cout<<it->first<<" "<<it->second<<endl;
//     };
//     return 0;
// };

// THREE NUMBERS
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k, s;
//     cin>>k>>s;
//     int count = 0;
//     for(int i = 0; i<=k; i++)
//     {
//         for(int j = 0; j<=k; j++)
//         {
//             if(i+j<=s)
//             {
//                 if(s-i-j<=k)
//                 {
//                     count++;
//                 };
//             };
//         };
//     };
//     cout<<count<<endl;
// };

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