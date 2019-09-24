#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int nBalloons, arrowsCount = 0, frontEnd = 0, arrowHeight, lastHitHeight = INT_MIN;
        cin>>nBalloons;
        vector<int> balloons(nBalloons);
        unordered_map<int, queue<int> > hashTable;
        for(int times=0; times<nBalloons; times++)
        {
            cin >> balloons[times];
            hashTable[ balloons[times] ].push(times);
        }
        while(!hashTable.empty())
        {
            while(balloons[frontEnd]==-1 && frontEnd<nBalloons) frontEnd++;
            arrowHeight = balloons[frontEnd];
            lastHitHeight = INT_MIN;
            arrowsCount++;
            //cout<<endl<<endl<<"Arrow count - "<<arrowsCount<<endl;
            while(arrowHeight)
            {
                if(!hashTable[arrowHeight].empty() && hashTable[arrowHeight].front() > lastHitHeight)
                {
                    //cout<<"arrow hitted at : "<<hashTable[arrowHeight].front()<<endl;
                    lastHitHeight = hashTable[arrowHeight].front();
                    balloons[ hashTable[arrowHeight].front() ] = -1;
                    hashTable[arrowHeight].pop();
                }
                if(hashTable[arrowHeight].empty())
                    hashTable.erase(arrowHeight);
                arrowHeight--;
            }
        }
        cout<<arrowsCount<<endl;
    }
    return 0;
}