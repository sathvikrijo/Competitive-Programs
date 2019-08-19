#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, ele, fitr, bitr, correct = false;
        cin>>n;
        vector<int> strips;
        for(int times=0; times<n; times++)
        {
            cin>>ele;
            strips.push_back(ele);
        }
        if(n%2==0)
        {
            cout<<"no"<<endl;
            continue;
        }
        else if(strips[0]!=1 || strips[n-1]!=1)
        {
            cout<<"no"<<endl;
            continue;
        }
        else
        {
            for(fitr=0, bitr=n-1; fitr<=bitr; fitr++, bitr--)
            {
                if(strips[fitr] == (fitr+1) && strips[fitr] == strips[bitr])
                    correct = true;
                else
                {
                    correct = false;
                    break;
                }
            }
        }
        if(correct)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}