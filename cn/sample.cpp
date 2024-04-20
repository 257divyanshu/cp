#include <bits/stdc++.h>
using namespace std;
string generateString(int n, int m)
{
    string str = "";
    char c = 'a';
    for (int i = 0; i < (n - m + 2); i++)
    {
        cout<<"pushing "<<c<<endl;
        
        str.push_back(c);
        if (c == 'a')
        {
            c = 'b';
        }
        else
        {
            c = 'a';
        };
    };
    for (int i = 1; i <= m - 2; i++)
    {
        cout<<"pushing "<<((char)97+i)<<endl;
        str.push_back(98 + i);
    };
    return str;
};
int main()
{
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;
    cout<<generateString(n,m)<<endl;
    return 0;
};