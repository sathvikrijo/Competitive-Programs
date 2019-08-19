#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,q;
        cin>>n>>q;
        long long int stones[100005],queries[100005];
        for(int i=0;i<n;i++)
            cin>>stones[i];
        for(int i=0;i<q;i++)
            cin>>queries[i];
        for(int i=0;i<q;i++)
        {
            long long int counter=0,skip=queries[i],j=0;
            while(j<n)
            {
                counter+=stones[j];
                j+=skip+1;
            }
            cout<<counter<<endl;
        }
    }
    return 0;
}
