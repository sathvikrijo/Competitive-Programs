#include <iostream>

using namespace std;

int main()
{
    int n,spaces;
    cin>>n;
    spaces = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spaces;j++)
            cout<<" ";
        for(int k=0;k<n-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        spaces++;
    }
    spaces--;
    for(int i=n-1;i>0;i--)
    {
        spaces--;
        for(int j=0;j<spaces;j++)
            cout<<" ";
        for(int k=n-i;k>=0;k--)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
