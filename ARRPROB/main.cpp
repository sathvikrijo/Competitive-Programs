#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n],farr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        for(int i=0;i<n;i++)
        {
            farr[i] = sum-arr[i];
            cout<<farr[i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
