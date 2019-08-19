#include<bits/stdc++.h>
#define lliu long long unsigned int
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, ele;
        lliu count = 0;
        vector<int> preXor;
        unordered_map<int, pair<lliu, lliu> > hashT;
        pair<lliu, lliu> temp;
        hashT[0].first = 0;
        hashT[0].second = 1;
        cin>>n;

        for(int times=0; times<n; times++)
        {
            cin>>ele;
            preXor.push_back(ele);
        }
        for(int itr=1; itr<preXor.size(); itr++)
            preXor[itr] ^= preXor[itr-1];       

        /*for(lliu itr=0; itr<preXor.size(); itr++)
        {
            hashT[preXor[itr]].first += (itr+1);
            hashT[preXor[itr]].second++;
        }*/
        for(int itr=0; itr<preXor.size(); itr++)
        {
            if(hashT.find(preXor[itr])!=hashT.end())
            {
                temp = hashT[preXor[itr]];
                count += (temp.second * (itr+1)) - temp.second - (temp.first);
            }
            hashT[preXor[itr]].first += (itr+1);
            hashT[preXor[itr]].second++;
        }
        cout<<count<<endl;
    }
    return 0;
}