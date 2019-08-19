#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size1,head=0,tail, value=1;
        bool state = true;

        cin>>size1;
        int arr[size1];
        tail = size1 - 1;
        for(int i=0; i<size1; i++)
        {
            cin>>arr[i];
        }
        while(1)
        {
            if(arr[head] == arr[tail] && arr[head+1] == arr[tail-1] && (arr[head] == value+1 || arr[head] == value))
                continue;
            else
            {
                state = false;
                break;
            }

        }

        if(state==true)
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}
