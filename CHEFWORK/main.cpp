#include <iostream>

using namespace std;

int main()
{
    int n, c[1000],t[1000],wr3[1000],wr2[1000],wr1[1000];
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
        cin>>t[i];

    int mini=0,j=-1,k=-1,l=-1,jtemp,ktemp,ltemp;

    for(int i=0;i<n;i++)
    {
        if(t[i]==3)
        {
            j++;
            wr3[j]=i;
        }
        else if(t[i]==2)
        {
            k++;
            wr2[k]=i;
        }
        else
        {
            l++;
            wr1[l]=i;
        }
    }

    /*cout<<"wr3: \t";
    for(int i=0;i<=j;i++)
    {
        cout<<wr3[i]<<"\t";
    }
    cout<<endl<<"wr2: \t";
    for(int i=0;i<=k;i++)
    {
        cout<<wr2[i]<<"\t";
    }
    cout<<endl<<"wr1: \t";
    for(int i=0;i<=l;i++)
    {
        cout<<wr1[i]<<"\t";
    }
    cout<<endl;*/
    jtemp = j;
    ktemp = k;
    ltemp = l;
    int temp;
    int i=0;

    temp = wr3[i];
    mini = c[temp];

    for(i=1;i<=jtemp;i++)
    {
        temp = wr3[i];
        if(mini>c[temp])
            mini = c[temp];
    }
    int temp1,temp2,sum;
    for(i=0;i<=ktemp;i++)
    {
        temp1 = wr2[i];
        for(int h=0;h<=ltemp;h++)
        {
            temp2 = wr1[h];
            sum = c[temp1] + c[temp2];
            if(sum<mini)
            {
                mini = sum;
            }
        }
    }

    cout<<mini;
    return 0;
}
