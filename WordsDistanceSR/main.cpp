#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i, size, j, strlen1, strlen2, ptr1=-1, ptr2=-1,k=0,counter=0, ptrtemp;
    bool state=false;
    char arr[500],substring1[50],substring2[50],compare[50];
    fgets(arr,100,stdin);
    scanf("%s%s",substring1,substring2);
    size = strlen(arr);
    strlen1 = strlen(substring1);
    strlen2 = strlen(substring2);
    for(i=size;i>=0;i--)
    {
        if(arr[i]==' ')
        {
            for(j=i+1; (arr[j]!=' ')&&(j!=size-1);j++)
            {
                compare[k] = arr[j];
                k++;
            }
            k=0;
            cout<<compare;
            if(((strcmp(compare,substring1)==0) || (strcmp(compare,substring2)==0)) && (state==false))
            {
                state = true;
                ptr2 = i+1;
                memset(compare,0,sizeof(compare));
            }
            if(((strcmp(compare,substring1)==0) || (strcmp(compare,substring2)==0)) && (state==true))
            {
                state = false;
                ptr1 = i+1;
                memset(compare,0,sizeof(compare));
            }
            cout<<"\t"<<compare<<"\tptr1: "<<ptr1<<"\tptr2: "<<ptr2<<endl;
            memset(compare,0,sizeof(compare));
        }
        if(i==0)
        {
            for(j=i;arr[j]!=' ';j++)
            {
                compare[k] = arr[j];
                k++;
            }
            cout<<compare<<"\tptr1: "<<ptr1<<"\tptr2: "<<ptr2<<endl;
            if((strcmp(compare,substring1)==0) || (strcmp(compare,substring2)==0))
            {
                state = true;
                ptr1 = i;
                memset(compare,0,sizeof(compare));

            }
        }
        //if((ptr1!=-1) && (ptr2!=-1))
            //break;
    }
    //cout<<"\n"<<ptr1<<"\t\t"<<ptr2<<endl;
    if(ptr1>ptr2)
    {
        ptrtemp = ptr1;
        ptr1 = ptr2;
        ptr2 = ptrtemp;
    }
    for(i=ptr1; i<=ptr2; i++)
    {
        if(arr[i]==' ')
            counter++;
    }
    cout<<counter;
    return 0;
}
