#include <iostream>
#define ll long long int
using namespace std;
ll prime[1000010];
int main()
{
    for(ll i=2;i<=1000005;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=2;j*i<=1000005;j++)
                prime[i*j]+=i;
        prime[i]=i;
        }
    }
    for(ll i=1;i<=1000005;i++)
        prime[i] += prime[i-1];
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,o;
        cin>>n>>o;
        cout<<(prime[o]-prime[n-1])%1000000007<<endl;
    }
    return 0;
}
