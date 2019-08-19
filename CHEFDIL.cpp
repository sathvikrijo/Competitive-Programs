#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int count, temp;
        bool flag = true;
        string input;
        cin>>input;
        count = temp = input.size();
        input = " " + input + " ";
        while(count > 0)
        {
            for(int itr=1; itr<input.size()-1; itr++)
            {
                if(input[itr] == '1')
                {
                    input[itr] = ' ';
                    count--;

                    if(input[itr-1] == '0')
                        input[itr-1] = '1';
                    else if(input[itr-1] == '1')
                        input[itr-1] = '0';

                    if(input[itr+1] == '0')
                        input[itr+1] = '1';
                    else if(input[itr+1] == '1')
                        input[itr+1] = '0';
                }
            }
            if(temp == count)
            {
                cout<<"LOSE"<<endl;
                flag = false;
                break;
            }
            else
                temp = count;
        }
        if(flag)
            cout<<"WIN"<<endl;
    }
    return 0;
}