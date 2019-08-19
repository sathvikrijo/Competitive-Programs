#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
bool prime[10001];

void sieve()
{
    prime[0]=0;
    prime[1]=0;
    memset(prime,1,sizeof(prime));
    for(int i=2;i*i<=10000;i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*2;j<=10000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    /*for (int p=2; p<=50; p++)
       if (prime[p])
          cout << p << " ";
    cout<<endl;*/
}

int main()
{
    sieve();
    int n,i,j,primeptr=2,eleptr=3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0 || i==1)
        {
            for(j=0;j<i;j++)
            {
                cout<<primeptr<<" ";
                while(++primeptr)
                {
                    if(prime[primeptr]==1)
                        break;
                }
            }
            cout<<endl;
        }
        else if(i%2==0)
        {
            for(j=0;j<i;j++)
            {
                cout<<eleptr<<" ";
                while(++eleptr)
                {
                    if(prime[eleptr]==0)
                        break;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
