#include <iostream>

using namespace std;
int fact (int x)
{
    if(x==0)
        return 0;
    else
        return x + fact(x-1);
}

int main()
{
    int t,n,k,magicPower=0,tot=0,i=0,tt;
    cin>>t;
    tt=t;
    int a[t];
    while(t!=0)
    {
        cin>>n>>k;
        magicPower = (n-1)*k;
        tot = fact(n);
        tot = tot + magicPower;
        a[i]=tot;
        i++;
        t--;
    }
    for(int j=0;j<tt;j++)
        cout<<a[j]<<" ";
    return 0;
}
