#include<bits/stdc++.h>
using namespace std;

int findNoOfWays(int ways, vector<int> steps)
{
    if(ways == 0 || ways == 1)
        return 1;
    else
    {
        vector<int> memo(ways+1, 0);
        memo[0] = 1;
        memo[1] = 1;
        for(int itr=2; itr<=ways; itr++)
        {
            int total = 0;
            int st;
            for(int stepsItr=0; stepsItr<steps.size(); stepsItr++)
            {
                st = steps[stepsItr];
                if(itr - st >= 0)
                    total += memo[itr - st];
            }
            memo[itr] = total;
        }
        return memo[ways];
    }
}

int main()
{
    int N, size;
    cin>>N;
    cin>>size;
    vector<int> steps(size, 0);
    for(int times=0; times<size; times++)
        cin>>steps[times];
    cout<<findNoOfWays(N, steps);
    return 0;
}
