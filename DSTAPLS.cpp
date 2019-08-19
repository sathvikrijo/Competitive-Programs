#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k, count;
        cin>>n>>k;
        if((n/k)%k==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}