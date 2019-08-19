#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    char classes[1000];

    int t,n,e,cost,sizei,flag;
    cin>>t;
    while(t--)
    {
        cin>>e>>cost;
        cin>>n;
        flag=0;

        while(n--)
        {
            cin>>classes;
            sizei = strlen(classes);
            for(int i=0;i<sizei;i++)
            {
                if(classes[i]=='b')
                {
                    if(e>=1)
                    {
                       e-=1;
                    }
                  else  if(e<1)
                    {
                        if(cost>=10)
                        {
                            cost=cost-10;
                            e+=10;
                            e-=1;
                        }
                        else
                        {
                            flag=1;

                        }
                    }

                }
                else if(classes[i]=='g')
                {
                    if(e>=2)
                    {
                        e-=2;
                    }
                    else if(e<2)
                    {
                        if(cost>=10)
                        {
                            cost=cost-10;
                            e+=10;
                            e-=2;
                        }
                        else
                        {

                            flag=1;

                        }
                    }

                }
                else if(classes[i]=='d')
                {
                    if(e>=3)
                    {
                        e-=3;
                    }
                  else  if(e<3)
                    {
                        if(cost>=10)
                        {
                            cost=cost-10;
                            e+=10;
                            e-=3;
                        }
                        else
                        {

                            flag=1;

                        }
                    }

                }
                else if(classes[i]=='s')
                {
                    if(e>=4)
                    {
                        e-=4;
                    }

                    else if(e<4)
                    {
                        if(cost>=10)
                        {
                            cost=cost-10;
                            e+=10;
                            e-=4;
                        }
                        else
                        {

                            flag=1;

                        }
                    }

                }
                else if(classes[i]=='m')
                {
                    if(e>=5)
                    {
                        e-=5;
                    }
                    else  if(e<5)
                        {
                            if(cost>=10)
                            {
                                cost=cost-10;
                                e+=10;
                                e-=5;
                                //cout<<endl<<"flag :"<<flag<<endl;
                            }
                            else
                            {

                                flag=1;

                            }
                        }

                }
            }

        }
          if(flag==1)
            {
                cout<<"Incomplete class\n";
                flag=0;

            }

        else
            cout<<e<<" "<<cost<<endl;
    }
    return 0;
}
