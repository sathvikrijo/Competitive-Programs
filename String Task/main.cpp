#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[1000];
    char new_str[1000]={};
    int i, j=0;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<97)
        {
            str[i]+=32;

        }
        if((str[i]!='a')&&(str[i]!='e')&&(str[i]!='i')&&(str[i]!='o')&&(str[i]!='u')&&(str[i]!='y'))
        {
            new_str[j]='.';
            new_str[j+1]=str[i];
            j+=2;
        }
    }
    cout<<new_str<<endl;
    return 0;
}
