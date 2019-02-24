#include <iostream>

using namespace std;

int main()
{
    int t,n,a[100],i=0,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int j=1;
        for(i=0;i<n;i++)
        {
            if(a[i]==7)
            {
                flag=1;
                j=i;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag==0)
        {
          cout<<"no";
          cout<<endl<<"i&j are"<<i<<endl<<j;
          return 0;
        }
        j = 1;
        while((j-i)!=-1)
        {
            if(a[i-j]==a[i] && a[i+j]==a[i])
            {
                flag=1;
            }
            else if((a[i-j]==a[i]-j) && (a[i+j]==a[i]-j))
            {
                flag=1;
            }
            else
            {
                    cout<<"no";
                    return 0;
            }
            j++;
        }
        if(flag==1)
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}
