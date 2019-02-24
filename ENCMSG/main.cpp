#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char farr[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char barr[27] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    char temp;
    int test,flag=0,siz;
    cin>>test;
    while(test--)
    {
        cin>>siz;
        char msg[siz];
        cin>>msg;
        for( int i=0 ; i < siz ; ++i ) msg[i] = tolower( msg[i] ) ;
        if(siz!=1)
        {
            if(siz-1%2!=0)
            {
                flag=1;
                siz--;
            }
            for(int i=0; i<siz; i=i+2)
            {
                temp = msg[i];
                msg[i] = msg[i+1];
                msg[i+1] = temp;
            }
            if(flag==1)
                siz++;
            for(int i=0; i<siz; i++)
            {
                for(int j=0; j<27; j++)
                {
                    if(msg[i]==farr[j])
                    {
                        msg[i]=barr[j];
                        break;
                    }
                }
            }
        }
        else
        {
            for(int i=0; i<27; i++)
            {
                if(msg[0]==farr[i])
                {
                    msg[0]=barr[i];
                    break;
                }
            }
        }
        cout<<msg<<endl;
    }
    return 0;
}
