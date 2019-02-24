#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,h;
        cin>>s>>h;
        if(h>=s)
            cout<<"Himawari"<<endl;
        else
            cout<<"Shinchan"<<endl;
    }
    return 0;
}
