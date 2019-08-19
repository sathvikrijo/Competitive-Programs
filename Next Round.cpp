#include<iostream>
using namespace std;

int main()
{
    int n,k,a[1000],counter=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
