#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a=0,b=0,eaten=0;
    cin>>n>>k;
    eaten += n;
    while(n>=k)
    {
            a=n/k;
            b+=n%k;
            eaten += a;
            n=a;
    }
    if(n<k)
    {
        b += n;
        eaten += b/k;
    }
    cout<<eaten;
}
