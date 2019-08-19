#include <iostream>

using namespace std;

int main()
{
    int n,k,a[1000];

    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Yes";
            break;
        }
    }
    return 0;
}
s
