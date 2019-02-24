#include <iostream>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x,y,power=1,knowledge=1;
        cin>>n>>m>>x>>y;
        /*
            while(power<n)
            {
                if((m-power)==1)
                    break;
                power+=x;
                if(power>n)
                {
                    power-=x;
                    break;
                }
            }
            while(knowledge<m)
            {
                if((n-knowledge)==1)
                    break;
                knowledge+=y;
                if(knowledge>m)
                {
                    knowledge-=y;
                    break;
                }
            }
            if(power+1==n && knowledge+1==m)
            {
                power+=1;
                knowledge+=1;
            }
    */
        if(power==n && knowledge==m)
            cout<<"Chefirnemo"<<endl;
        else
            cout<<"Pofik"<<endl;
    }
    return 0;
}
