#include <bits/stdc++.h>
#define MAX 200000
using namespace std;
int main() {
    int n,a,b,t;
    char gr[2],card[2];
    cin>>n;
    while(n--)
    {
        int count=1,flag=-1,i;
        cin>>a>>b>>gr>>t;
        for(i=0 ; i<2*t && a!=0 && b!=0 ; i++)
        {
            cin>>card;
            if(i%2==0)
            {
                if(flag==1)
                {
                    gr[0]=card[0];
                    a--;
                    count=1;
                }
                else if(card[0]==gr[0])
                {
                    a=a+count;
                    count=0;
                    flag=0;
                }
                else
                {
                    count++;
                    a--;
                }
            }
            else
            {
                if(flag==0)
                {
                    count=1;
                    gr[0]=card[0];
                    b--;
                }
                else if(card[0]==gr[0])
                {
                    b=b+count;
                    count=0;
                    flag=1;
                }
                else
                {
                    count++;
                    b--;
                }
            }
        }
        if(a>b)
        {
            cout<<"Shreyans"<<endl;
        }
        else if(a<b)
        {
            cout<<"Shahrukh"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
	return 0;
}
