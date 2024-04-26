#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {

        int n;
        cin >> n;
        vector<int> vect(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vect[i];
        };
        int i = 0;
        int count = 0;
        while (1)
        {
            while (vect[i] == 0 && i <= n - 2)
            {
                i++;
            };
            int j = i;
            while (vect[j] != 0 && j <= n - 2)
            {
                j++;
            };
            if (i == j)
            {
                // cout << "i is " << i << " element is " << vect[i] << endl;
                // cout << "j is " << j << " element is " << vect[j] << endl;
                // cout<<"breaking"<<endl;
                break;
            }
            else
            {
                // cout << "i is " << i << " element is " << vect[i] << endl;
                // cout << "j is " << j << " element is " << vect[j] << endl;
                // cout<<"continuing"<<endl;
                count++;
                vect[i]--;
                vect[j]++;
            };
        };
        cout << count << endl;
    };
};