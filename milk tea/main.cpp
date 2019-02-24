#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,times=1;
    cin>>tc;
    while(tc--)
    {
        int no_of_friends, not_available, binCombination,one_digit,flag,minScoldings=10000,counter,p,i,j,k;
        cin>>no_of_friends>>not_available>>binCombination;
        string friendsChoices[no_of_friends],cantMake[not_available],binComb,summa;
        for(i=0;i<no_of_friends;i++)
        {
            cin>>friendsChoices[i];
        }
        for(i=0;i<not_available;i++)
        {
            cin>>cantMake[i];
        }
        for(i = 0; i < pow(2,binCombination); ++i)
        {
            stringstream ss;
            flag=0;
            counter=0;
            for(j=pow(2,binCombination)/2;j>0;j/=2)
            {
                one_digit = i/j%2;
                ss<<one_digit;
            }
            binComb = ss.str();
            for(j=0;j<not_available;j++)
            {
                if(binComb.compare(cantMake[j])==0)
                {
                    flag=1;
                    break;
                }
            }
            p=0;
            if(flag==0)
            {
                //cout<<"checking for "<<binComb<<endl;
                for(j=0;j<binCombination;j++)
                {
                    for(k=0;k<no_of_friends;k++)
                    {
                        if(binComb[p]!=friendsChoices[k][j])
                            counter++;
                        //cout<<"comparing "<<binComb[p]<<" and "<<friendsChoices[k][j]<<endl;
                    }
                    p++;
                }
                //cout<<"counter: "<<counter<<endl;
                if(counter<minScoldings){
                    minScoldings=counter;
                    summa = binComb;
                }
            }

        }
        cout<<"Case #"<<times<<": "<<minScoldings<<"\t"<<summa<<endl;
        times++;
    }
    return 0;
}
