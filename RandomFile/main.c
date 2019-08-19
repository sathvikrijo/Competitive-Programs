#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,i=0,pos;
    char key;
    FILE *fp;
    fp=fopen("randomfile.txt","w");
    if(fp==NULL)
    {
        printf("File is not opened, Program crashing");
        return 0;
    }
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers now,\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
    }
    i=0;
    fclose(fp);
    fp=fopen("randomfile.txt","r");
    printf("Enter the postion, from which the file is gonna shown\n");
    scanf("%d",&pos);
    fseek(fp,(pos-1)*sizeof(int),SEEK_SET);
    while(!feof(fp))
    {
        num=getw(fp);
        if(num>0)
        printf("%d\t",num);
    }
    printf("\nThe file content in reverse order\n");
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);
    i=0;
    while(i*sizeof(int)<pos)
    {
        i++;
        fseek(fp,-i*sizeof(int),SEEK_END);
        num=getw(fp);
        printf("%d\t",num);
    }
    fclose(fp);
    return 0;
}
