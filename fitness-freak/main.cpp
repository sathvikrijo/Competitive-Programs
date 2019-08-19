#include <iostream>

using namespace std;

int main()
{
    int t,i=1,temp_t;
    float n,x,wake_up=16.30;
    cin>>t;
    temp_t=t;
    int flag[t+1];
    while(t--)
    {
        cin>>n>>x;
        if(x>=1.00 && x<=4.30)
            x=x+12.00;
        if(x+n<=(wake_up+0.01))
            flag[i]=1;
        else
            flag[i]=0;
        i++;
    }
    for(i=1;i<=temp_t;i++)
    {
        if(flag[i]==1)
            cout<<"Enough Sleep"<<endl;
        else
            cout<<"Not Enough Sleep"<<endl;
    }
    return 0;
}
