#include <bits/stdc++.h>
using namespace std;

bool checkAllExpired(long long int arr[],int siz)
{
    for(int i=0;i<siz;i++)
    {
        if(arr[i]>0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,k,t,time=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int drank_or_not=0,no_of_drank=0,index=-1,i,j,mini;
        long long int a[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(1)
        {
            for(j=1;j<=k;j++)
            {
                index=-1;
                mini=INT_MAX;
                for(i=0;i<n;i++)
                {
                    if(a[i]<mini && a[i]>0)
                    {
                        mini=a[i];
                        index = i;
                    }
                }
                if(index>-1)
                {
                    a[index]=0;
                    no_of_drank++;
                }
                if(checkAllExpired(a,n))
                    break;
            }
            for(i=0;i<n;i++)
                a[i]-=1;
            if(checkAllExpired(a,n))
                break;
        }
        cout << "Case #" << time << ": " << no_of_drank << endl;
        time++;
    }
    return 0;
}
