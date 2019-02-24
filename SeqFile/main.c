#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,i=0;
    char str[20];
    FILE *fp;
    fp=fopen("test.txt","w");
    if(fp==NULL)
    {
        printf("File is not opened, Programming crashing");
        return 0;
    }
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    printf("Enter the %d numbers now,\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
        //fscanf(fp,"%d",&num);
    }
    fclose(fp);
    fp=fopen("test.txt","a");
    fprintf(fp,"%s","Hai Sathvik");
    fclose(fp);
    i=0;
    fp=fopen("test.txt","r");
    printf("\nThe Elements in the file are:\n");
    for(i=0;i<n;i++)
    {
        num=getw(fp);
        printf("%d\t",num);
    }
    fgets(str,2,fp);
    printf("\n%s",str);
    return 0;
}
