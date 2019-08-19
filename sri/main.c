/*#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    char arr[1000];
    string arrs;
    scanf("%[^\n]s",arr);
    cout<<"scanf: "<<arr<<endl;
    cin.ignore();
    getline(cin,arrs);
    cout<<"cin: "<<arrs<<endl;
    arr[7]='\0';
    char* s = arr;
    arrs = s;
    if(arrs==s)
    cout<<s<<" "<<arrs<<endl;
    reverse(arrs.begin(),arrs.end());
    cout<<arrs;
    return 0;
}*/

