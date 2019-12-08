#include<bits/stdc++.h>
#define llu long long unsigned int
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        llu count = 0;
        for(int itr=0; itr<str.length(); itr++)
        {
            if( str[itr]>='0' && str[itr]<='9')
                count += str[itr] - '0';
        }
        cout<<count<<endl;
    }
    return 0;
}