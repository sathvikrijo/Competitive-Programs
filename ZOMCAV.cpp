#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        vector<int> caves, zomHealth;
        map<int, int> hashTable;
        bool flag = true;
        int n, ele, start, end;
        cin>>n;
        vector<int> radiation(n);
        for(int times=0; times<n; times++)
        {
            cin>>ele;
            caves.push_back(ele);
        }
        for(int times=0; times<n; times++)
        {
            cin>>ele;
            zomHealth.push_back(ele);
            //hashTable[ele]++;
        }
        for(int itr=0; itr<n; itr++)
        {
            start = itr - caves[itr];
            if(start<0)
                start = 0;
            end = itr + caves[itr];
            if(end>=n)
                end = n-1;
            radiation[start] += 1;
            if(end != n-1)
                radiation[end+1] -= 1;
        }
        for(int itr=1; itr<n; itr++)
            radiation[itr] += radiation[itr-1];
        for(int times=0; times<n; times++)
        {
            //cout<<radiation[times]<<" ";
            hashTable[radiation[times]]++;
        }
        for(int itr=0; itr<n; itr++)
        {
            if(hashTable[zomHealth[itr]]==0)
            {
                flag = false;
                break;
            }
            hashTable[zomHealth[itr]]--;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}