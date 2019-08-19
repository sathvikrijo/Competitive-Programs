#include <iostream>

using namespace std;

int k,A,B;

int dp(int q)
{
    int temp2 = 0,temp1 = 0,temp = 0;
    if(q == 1)
    {
        cout<<"Returned K"<<endl;
        return k;
    }
    else
    {
        temp1 = A * dp(q-1);
        cout<<"Temp1 "<<temp1<<endl;
        for(int i = 1; i<=q-1;i++)
        {
            temp2 = temp2 + (dp(q) * dp(q-i));
            cout<<"Temp2 "<<temp2<<endl;
        }
        temp2 = temp2 * B;
        temp = temp1 + temp2;
        cout<<"Temp "<<temp<<endl;
        return temp;
    }
}

int main()
{
    int n,ans;
    cin>>n>>k>>A>>B;
    ans = dp(n);
    cout<<ans;
    return 0;
}
