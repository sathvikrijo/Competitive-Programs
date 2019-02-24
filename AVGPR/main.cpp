#include <iostream>

using namespace std;

void swapp(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

long long int partitions(int arr[], long long int low, long long int high)
{
    int pivot = arr[high];
    long long int i = (low - 1);

    for (long long int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], long long int low, long long int high)
{
    if (low < high)
    {
        long long int pi = partitions(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

bool binsearch(int arr[], long long int l, long long int h, int ele)
{
    while(l<=h)
    {
        long long int mid = (l + h)/2;
        if(arr[mid] == ele)
            return true;
        else if(arr[mid] < ele)
            l = mid+1;
        else
            h = mid-1;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, i=0;
        int sum=0,counter=0,num1,num2;
        bool present;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        quickSort(a,0,n-1);
        /*for(int m=0;m<n;m++)
        {
            cout<<a[m]<<"\t"<<endl;
        }*/
        for(int j=0;j<n-1;j++)
        {
           for(i=j+1;i<n;i++)
           {
               sum=0;
               //cout<<"sum: "<<sum<<endl;
               sum = a[i] + a[j];
               if(sum%2==0)
               //if((num1%2==0 && num2%2==0) || (num1%2!=0 && num2%2!=0))
               {
                   sum = sum/2;
                   //cout<<"entered sum%2"<<endl;
                   /*for(int k=0;a[k]<=sum;k++)
                   {
                       if(a[k]==sum)
                       {
                           counter++;
                           break;
                       }
                   }*/
                   present = binsearch(a,j,i,sum);
                   if(present == true)
                        counter++;
               }
           }
        }
        cout<<counter<<endl;
    }
    return 0;
}
