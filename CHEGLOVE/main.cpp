#include <iostream>

using namespace std;

int main()
{
    int t,n,k=1,t1;
    int for_tag=0, back_tag=0;
    cin>>t;
    t1=t;
    unsigned long int Final[t+1];
    while(t--)
    {
        cin>>n;
        unsigned long int L[n+1];
        unsigned long int G[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>L[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>G[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(L[i]>G[i])
            {
                for_tag = 1;
                break;
            }
        }
        int  j=1;
        for(int i=n;i>=1;i--)
        {
            if(L[j]>G[i])
            {
                back_tag = 1;
                break;
            }
            j++;
        }
        if(for_tag == 0 && back_tag == 0)
            Final[k]=3;
        else if(for_tag == 0)
            Final[k]=2;
        else if(back_tag == 0)
            Final[k]=1;
        else
            Final[k]=0;
        k++;
        for_tag=0;
        back_tag=0;
    }
    for(k=1;k<=t1;k++)
    {
        if(Final[k]==3)
            cout<<"both"<<endl;
        else if(Final[k]==2)
            cout<<"front"<<endl;
        else if(Final[k]==1)
            cout<<"back"<<endl;
        else if(Final[k]==0)
            cout<<"none"<<endl;
    }
    return 0;
}
