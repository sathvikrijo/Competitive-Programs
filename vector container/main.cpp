#include <bits/stdc++.h>
using namespace std;
                                                                        //vector is an dynamic array
int main()
{
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(6);
    v1[0]=4;                    //only for changing the values already in the vectors
    v1[1]=5;                    //only for changing the values already in the vectors

    for(int i=0; i<v1.size();i++)                 //vector can get to the output by using one of this method else using iterator
    {
        cout<<v1[i]<<" ";
    }

    cout<<endl;

    v1.pop_back();

    for(int i=0; i<v1.size();i++)               //this one and above one are same as equal, we can either use operator[] or at()
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    vector <int> ::iterator itr;                            //intializing the iterator

    for(itr=v1.begin(); itr!=v1.end(); itr++)           //iterator circling throughout the vector
    {
        cout<<*itr<<" ";
    }

    cout<<*v1.end();

    return 0;
}
