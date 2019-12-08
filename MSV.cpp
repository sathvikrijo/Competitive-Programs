#include<bits/stdc++.h>
#define llu long long unsigned

using namespace std;

bool isPrime(int num)
{
    if(num == 2)
        return false;
    for(int i=2; i*i<=num; i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, maxStar = 0, curStar;
        cin>>n;
        llu int input[n];
        for(int itimes=0; itimes<n; itimes++)
        {
            cin>>input[itimes];
        }
        for(int itr=0; itr<n; itr++)
        {
            curStar = 0;
            
            if(curStar > maxStar)
                maxStar = curStar;
        }
        cout<<maxStar<<endl;
    }
    return 0;
}