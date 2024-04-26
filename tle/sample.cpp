#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int t; // t -> no. of test cases
        cin>>t; 
        int wh, wm; // wh -> waking hour , wm -> waking minute
        cin>>wh>>wm;
        vector<pair<int,int>> resultVector; // made a vector that will store the amount of time Vlad will sleep if he gets up at a particular alarm NOTE : used pair so as to store the hour and minute separately
        for(int j = 0; j<n; j++) // handling all the alarms Vlad had set in a particular test case
        {
            int gh, gm; // gh for alarm hour and gm for alarm minute
            cin>>gh>>gm;
            pair<int,int> p1; // made a pair to store the number of hour and number of minutes Vlad will sleep if he wakes up in a particular alarm
            p1.first = (gh-wh+24)%24; // this will store the number of hour Vlad slept
            p1.second = (gm-wm+60)%60; // this will store the number of minutes Vlad slept
            // added 24 (in the lines above) so as to handle the case in which difference of hours is negative
            // added 60 (in the lines above) so as to handle the case in which difference of minutes is negative
            if(gm<wm) // decrease the difference in hour by 1 to handle a case like : Vlad goes to sleep at 23:30 and wakes at 5:00
            {
                p1.first--;
            };
            resultVector.push_back(p1); // will store the differences in a vector so that we can compare them later
        };
        auto it = min_element(resultVector.begin(),resultVector.end()); // finding the minimum differences, this will give us the nearest possible alarm
        cout<<it->first<<" "<<it->second<<endl; // logging it
    };
    return 0;
};
// the code above passes the test cases mentioned below the question (on codeforces) but on submitting shows that wrong answer at test case 2
// for crosschecking I gave the question and this code to ChatGPT and asked if there's some, but, GPT said that there's no bug
// I also told GPT to check for edge cases, it checked, but code gave corrrect answers on them to....
// can you please find the bug....
// thanks a lot if you read this till end.....
