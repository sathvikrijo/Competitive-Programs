#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d\n",n)
#define bitget(n) __builtin_popcountll(n)

ll prime[1000011];
int main()
{
    ll t,i,j,p,q,k,n,m,l,r;
    for(i=2;i<=1000000;i++){
      if(prime[i]==0){
        for(j=2;j*i<=1000000;j++){
          prime[i*j] += i;
        }
        prime[i] = i;
      }
    }
    for(i=1;i<=50;i++)
        cout<<prime[i]<<" ";
    cout<<endl;
    for(i=1;i<=1000000;i++){
      prime[i] += prime[i-1];
    }
    for(i=1;i<=50;i++)
        cout<<prime[i]<<" ";
    cout<<endl;
        sfl(t);
    while(t--){
      sfl(l);
      sfl(r);
      cout<<prime[r]<<" "<<prime[l-1]<<endl;
      pfl((prime[r]-prime[l-1])%mod);
      cout<<endl;
    }
return 0;
}

