#include <iostream>

using namespace std;

int main()
{
    int counter=0,t,n,n_temp,k,flag=0;
    int prime[]={1,3,7,9};
    int prime2[]={2,5};
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        j=0;
        for(int i=0;i<=3;i++)
        {
            n_temp=n;
            if(n_temp==0)
            {
                n_temp=(n_temp*10)+prime2[j];
                j++;
            }
            else
                n_temp=(n_temp*10)+prime[i];

            for(int j=2; j<=n_temp/2; ++j)
            {
                if(n_temp%j==0)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
            {
                //cout<<"prime nos: "<<n_temp;
                counter++;
            }
            flag=0;
        }
        if(counter == 0 || counter >k)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        counter =0;
    }

    return 0;
}
