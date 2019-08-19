#include<bits/stdc++.h>
using namespace std;

void lengthEncoding(char *input)
{
    int itr=-1, len = strlen(input);
    char count = '0', tempchar=input[0], tempcount='1';
    for(int i=1; i<len; i++)
    {
        if(i+1!=len && (tempchar!=input[i]))
        {
            itr++;
            input[itr] = tempchar;
            tempchar = input[i+1];
            input[++itr] = tempcount;
            tempcount = '1';
        }
        else if(i+1!=len && (tempchar==input[i]))
        {
            tempcount++;
        }
        else if(i+1==len)
        {
            if(tempchar==input[i])
                tempcount++;
            itr++;
            input[itr] = tempchar;
            if(tempcount!=0)
            {
                input[++itr] = tempcount;
                tempcount = '1';
            }
        }
    }
    input[++itr] = '\0';
    cout<<"Result: "<<input<<endl;
}

int main()
{
    char text[25];
    cout<<"Enter the text: ";
    cin>>text;
    lengthEncoding(text);
    return 0;
}