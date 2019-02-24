#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int t,st,ed,w,num,temp,limit;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&w);
        int digits[n];
        int counter=0,fcounter=0,sum,mul,limitt;
        st = powf(10,n-1);
        ed = powf(10,n);
        //cout<<"st: "<<st<<"\t"<<"ed: "<<ed<<endl;
        limit = ed - (st*w);
        mul = powf(10,n-2);
        //cout<<limit<<endl;
        int j = 0;
        for(int i=st,run=0;run<=limit;run++,i++)
        {
            counter = 0;
            j=-1;
            sum=0;
            num = i;
            cout<<num;
            while(num>0)
            {
                j++;
                digits[j] = num%10;
                num = num/10;
                counter++;
            }
            counter = counter -1;
            /*for(int k=0;k<=j;k++)
            {
                cout<<digits[k];
            }*/
            cout<<"\t";

            while(counter>0)
            {
                sum = sum + (digits[j-1] - digits[j]);
                j--;
                counter--;
            }
            cout<<sum<<endl;
            if(sum == w)
                fcounter++;

        }
        //fcounter = fcounter * (mul-1);
        printf("%d",fcounter);
    }
    return 0;
}
