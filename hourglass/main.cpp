#include <iostream>

using namespace std;

int main()
{
    int t,n,sp=0;
    cin>>t;
    while(t--)
    {
        sp=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<sp;k++)
                cout<<" ";
            for(int i=1;i<=n-j;i++)
            {
                cout<<"* ";
            }
            cout<<endl;
            sp++;
        }
        sp=sp-2;
        for(int j=n-2;j!=-1;j--)
        {
            for(int k=sp;k!=0;k--)
                cout<<" ";
            for(int i=0;i<n-j;i++)
            {
                cout<<"* ";
            }
            cout<<endl;
            sp--;
        }
    }
    return 0;
}
