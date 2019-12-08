#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int times, scorePoints = 0;
        cin>>times;
        vector<int> scoresheet(1000,0);
        while(times--)
        {
            int problem, score;
            cin>>problem>>score;
            if(scoresheet[problem] < score && problem<=8)
            {
                scorePoints -= scoresheet[problem];
                scorePoints += score;
                scoresheet[problem] = score;
            }
        }
        cout<<scorePoints<<endl;
    }
    return 0;
}