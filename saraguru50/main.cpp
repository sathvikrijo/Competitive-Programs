#include <iostream>

using namespace std;

int main()
{
    int n,k,a[1000],counter=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            counter++;
    }
    if(counter >= k)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
