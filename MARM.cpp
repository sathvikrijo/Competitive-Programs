#include<bits/stdc++.h>
#define llu long long unsigned
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, k, itr, uptoIndex, times;
        bool flag;
        cin>>n>>k;
        llu int input[n], row0[n], row1[n];
        for(int inputtimes=0; inputtimes<n; inputtimes++)
        {
            cin>>input[inputtimes];
            if(inputtimes>=n/2 && n%2==0)
            {
                row0[n - inputtimes - 1] = row1[inputtimes] = input[inputtimes] ^ input[n - inputtimes - 1];
                row0[inputtimes] = input[n - inputtimes - 1];
                row1[n - inputtimes - 1] = row0[n - inputtimes - 1] ^ row0[inputtimes];
            }
            else if(inputtimes>=n/2 && n%2!=0)
            {
                if(inputtimes == n/2)
                {
                    row0[inputtimes] = 0; 
                    row1[inputtimes] = input[inputtimes];
                }
                else
                {
                    row0[n - inputtimes - 1] = row1[inputtimes] = input[inputtimes] ^ input[n - inputtimes - 1];
                    row0[inputtimes] = input[n - inputtimes - 1];
                    row1[n - inputtimes - 1] = row0[n - inputtimes - 1] ^ row0[inputtimes];
                }
            }
                //row0[inputtimes] = input[inputtimes];
        }
        //cout<<"OUT"<<endl;
        times = 0;
        uptoIndex = k-1;
        if(k-1>=n)
        {
            times = ((k-1)/n)%3;
            uptoIndex = (k-1)%n;
        }
        //cout<<"CHECK: "<<times<<" "<<uptoIndex<<endl;
        for(int itr=0; itr<n; itr++)
        {
            if(times == 0)
            {
                    cout<<row0[itr]<<" ";
            }
            else if(times == 1)
            {
                    cout<<row1[itr]<<" ";
            }
            else if(times == 2)
            {
                    cout<<input[itr]<<" ";
            }
            if(itr == uptoIndex)
            {
                times--;
                if(times<0)
                    times = 2;
            }
        }
        cout<<endl;
    }
    return 0;
}