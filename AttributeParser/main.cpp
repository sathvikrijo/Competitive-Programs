#include <iostream>
#include <sstream>
#include <string.h>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map <string, string> tagParser;
    map <string, string> attri;
    string preTag, presTag, fullTag, tempTag, attributeName, value, key, inputQuery;
    int n,k,pos1,pos2;
    cin>>n>>k;
    cin.ignore();
    while(n--)
    {
        getline(cin,fullTag);
        //cout<<fullTag<<endl;
        if(fullTag[1]=='/')
        {
            stringstream ss;
            ss<<fullTag.substr(2);
            getline(ss,presTag,'>');
            pos1 = 2;
            pos2 = fullTag.find('>');
            preTag = preTag.substr(0,preTag.length()-1-(pos2-pos1));
            key = preTag + "~" + attri[presTag];
            value = tagParser[presTag];
            tagParser[key] = value;
            //cout<<preTag<<"\t"<<presTag<<endl;
        }
        else
        {
            stringstream ss;
            ss<<fullTag.substr(1);
            getline(ss,presTag,' ');
            getline(ss,attributeName,' ');
            attri[presTag] = attributeName;
            pos1 = fullTag.find('"');
            pos2 = fullTag.find('>');
            value = fullTag.substr(pos1+1,pos2-pos1-2);
            //cout<<presTag<<endl<<attributeName<<endl<<value<<endl;
            key = presTag+"~"+attributeName;
            tagParser[key] = value;
            //cout<<key<<endl<<value<<endl;
            if(preTag=="")
            {
                preTag = presTag;
            }
            else
            {
                preTag += "." + presTag;
            }
            //cout<<preTag<<endl;
        }
    }
    while(k--)
    {
        getline(cin,inputQuery);
        if(tagParser.find(inputQuery)==tagParser.end())
            cout<<"Not Found"<<endl;
        else
            cout<<"Found"<<endl;
    }
    //<tag1 name = "Sathvik">
    //<tag2 value = "Rijo">

    return 0;
}
