#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, minV = INT_MAX, count = 0;
        cin>>n;
        vector<int> prices(n);
        deque<int> prevPrices;
        deque<int> ::iterator qitr;
        for(int days=0; days<n; days++)
            cin>>prices[days];
        for(int itr=0; itr<n; itr++)
        {
            minV = INT_MAX;
            for(auto search : prevPrices)
                minV = min(search, minV);
            if(prices[itr] < minV)
            {
                count++;
                minV = prices[itr];
            }
            prevPrices.push_back(prices[itr]);
            if(prevPrices.size() > 5)
                prevPrices.pop_front();
        }
        cout<<count<<endl;
    }
    return 0;
}