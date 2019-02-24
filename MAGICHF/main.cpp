#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n, s;
        int x,x1,x2;
        cin>>n>>x>>s;
        for(int i=0;i<s;i++)
        {
            cin>>x1>>x2;
            if(x1==x2)
            {
                return 0;
            }
            else if(x1==x)
            {
                x = x2;
            }
            else if(x2==x)
            {
                x = x1;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
