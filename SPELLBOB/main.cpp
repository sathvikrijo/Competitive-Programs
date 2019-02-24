#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string card1, card2;
        int countb=0,counto=0, times=0;
        cin>>card1>>card2;
        transform(card1.begin(), card1.end(), card1.begin(), ::tolower);
        transform(card2.begin(), card2.end(), card2.begin(), ::tolower);
        //cout<<card1<<card2<<endl;
        while(times!=3)
        {
//            if((card1[times]=='b') && (card2[times]=='o'))
//            {
//                countb++;
//                counto++;
//            }
//            else if((card1[times]=='b') || (card2[times]=='b'))
//                countb++;
//            else if((card1[times]=='o') || (card2[times]=='o'))
//                counto++;
//            times++;
            if(card1[times]=='b')
                countb++;
            else if(card2[times]=='b')
                countb++;
            else if(card1[times]=='o')
                counto++;
            else if(card2[times]=='o')
                counto++;
            times++;
        }
        //cout<<countb<<"   "<<counto<<endl;
        if((countb>=2)&&(counto>=1))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
