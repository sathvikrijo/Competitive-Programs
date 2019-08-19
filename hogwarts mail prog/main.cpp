#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string yes ="yes";
string no ="no";
/*string fd(char *c)
{
   char ab[]="@hogwarts.com";
    int count=0;
    for(int i=0;c[i]!='@';i++)
    {
        count++;
    }
    if(count>5)
    {
        return no;
    }
    else
    {
        int j=0;
        while(c[count]!='\0')
        {
            if(c[count]==ab[j])
            {
            }
            else
                return no;
            count++;
            j++;
        }
        return yes;
    }
}*/
string fd (string c)
{
    string h = "@hogwarts.com";
    int count=0;
    int found=0;
    for(int i=0;c[i]!='@';i++)
    {
        count++;
    }
    if(count>5)
    {
        return no;
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            if(islower(c[i]))
             {
                 continue;
             }
            else
                return no;
        }
        string d="1234567890100";
        int j=0;
        int len=c.length();
        for(int i=5; i<18; i++)
        {
            d[j]=c[i];
            j++;
        }
        if(d==h)
            return yes;
        else
            return no;
    }
}
int main()
{
    //char c[20];
    string c;
    cin>>c;
    string answer = fd(c);
    cout<<answer;
    return 0;
}
