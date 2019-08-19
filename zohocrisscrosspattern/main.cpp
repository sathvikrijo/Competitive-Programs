#include <iostream>

using namespace std;

int main()
{
    string arr = "PROGRAMMERS";

    int posStart=0, posEnd=arr.length()-1;

    for(int line=0; line<arr.length(); line++)
    {
        for(int wordPos=0; wordPos<arr.length(); wordPos++)
        {
            if(wordPos == posStart)
                cout<<arr[posStart];
            else if(wordPos == posEnd)
                cout<<arr[posEnd];
            else
                cout<<" ";
        }
        cout<<endl;
        posStart++;
        posEnd--;
    }
    return 0;
}
