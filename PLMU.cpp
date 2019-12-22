#include<bits/stdc++.h>
using namespace std;

int dp[100000];
int itr=2;

int formulate(int num)
{
    for(; itr<=num; itr++)
    {
        dp[itr] = (itr-1) + dp[itr-1];
    }
    return dp[num];
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, count=0, result = 0;
        cin>>n;
        dp[0] = 0;
        dp[1] = 0;
        int ones=0, twos=0, zeros=0;
        vector<int> table(100000);
        for(int ele=0; ele<n; ele++)
        {
            cin>>table[ele];
            if(table[ele] == 0)
                zeros++;
            else if(table[ele] == 1)
                ones++;
            else if(table[ele] == 2)
                twos++;
        }
        if(zeros > 1)
            count += formulate(zeros);
        //if(ones > 1)
            //count += formulate(ones);
        if(twos > 1)
            count += formulate(twos);
        cout<<count<<endl;

    }
}