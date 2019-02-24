#include <stdio.h>
#include <stdlib.h>

int stR,stC,i=0,j=0,endR,endC,a[10][10];

void fnU(int stR,int stC,int i,int j,int endR,int endC)
{
    i--;
    j++;
    while(i>stR)
    {
        printf("%d\t",a[i][j]);
        i--;
    }
}

void fnL(int stR,int stC,int i,int j,int endR,int endC)
{
    j--;
    i--;
    while(j>=stR)
    {
        printf("%d\t",a[i][j]);
        j--;
    }
    fnU(stR,stC,i,j,endR,endC);
}

void fnD(int stR,int stC,int i,int j,int endR,int endC)
{
    i++;
    j--;
    while(i<endR)
    {
        printf("%d\t",a[i][j]);
        i++;
    }
    fnL(stR,stC,i,j,endR,endC);
}

void fnR(int stR,int stC,int i,int j,int endR,int endC)
{
    while(j<endC)
    {
        printf("%d\t",a[i][j]);
        j++;
    }
    fnD(stR,stC,i,j,endR,endC);
}

int main()
{
    int spRound=0,count=0,r,c;
    //getting the number of rows and columns
    printf("Enter the columns and rows: ");
    scanf("%d%d",&r,&c);
    spRound = r>c?r:c;
    //getting the matrix elements
    printf("Enter the matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    //printing the matrix to check it whether it is initialized correctly
    printf("The Matrix elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n\n");
    //initializing the variables
    stR=0;
    stC=0;
    endR=r;
    endC=c;
    i=0;j=0;
    //here the magic loop
    for(count=0;count<spRound;count++)
    {
        fnR(stR,stC,i,j,endR,endC);
        stR++;
        stC++;
        i=stR;
        j=stC;
        endR--;
        endC--;
    }
    return 0;
}
