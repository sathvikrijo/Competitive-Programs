#include<bits/stdc++.h>
using namespace std;

void lengthEncoding(char *input)
{
    int itr=-1, len = strlen(input);
    char count = '0';
    for(int i=0; i<len; i++)
    {
        if(i+1!=len && (input[i]!=input[i+1]))
        {
            count++;
            input[++itr] = input[i];
            input[++itr] = count;
            count='0';
            continue;
        }
        else if(i+1==len && count=='0')
        {
            input[++itr] = input[i];
        }
        else if(i+1==len && count!='0')
        {
            count++;
            input[++itr] = input[i];
            input[++itr] = count;
        }
        count++;
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