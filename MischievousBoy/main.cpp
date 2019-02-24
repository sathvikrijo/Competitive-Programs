#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,counter=1,i,j,k;
    string str;
    char str2[1000];
    getline(cin,str);
    cin>>n;
    for(i=0;str[i]!='\0';i++)
    {
        if(n==1)
            break;
        if(str[i]==char(32))
        {
            counter++;
            if(counter==n)
            {
                i++;
                break;
            }
        }
    }
    for(j=0,k=i;str[i]!=char(32) && str[i]!='\0' ;i++,j++)
    {
        str2[j]=str[i];
    }
    j--;
    for(;j>=0;j--)
    {
        str[k]=str2[j];
        k++;
    }
    cout<<str;
    return 0;
}
