#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int a[2],counter=1,temp;
    unsigned long int n;
    cin>>n;
    char st[n];
    cin>>st;
        a[0]=counter;
        a[1]=++counter;
        if(st[0]=='I')
        {
            cout<<a[1]<<a[0];
        }
        else if(st[0]=='D')
        {
            cout<<a[0]<<a[1];
        }
        a[0]=++counter;
        a[1]=++counter;
    for(int i=1;i<n;i++)
    {
        if(st[i]=='D')
        {
            cout<<a[1];
            a[1]=++counter;
        }
        else if(st[i]=='I')
        {
            cout<<a[0];
            a[0]=++counter;
        }
    }
    return 0;
}
