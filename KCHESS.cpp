#include<bits/stdc++.h>
using namespace std;

map< pair<int, int>, bool> checks;

void checkPositions(int x, int y)
{
    checks[{x+2,y-1}]=true;
    checks[{x+2,y+1}] = true;
    checks[{x-2, y-1}] = true;
    checks[{x-2,y+1}] = true;
    checks[{x-1,y+2}] = true;
    checks[{x+1,y+2}] = true;
    checks[{x-1,y-2}] = true;
    checks[{x+1,y-2}] = true;
}

bool checksfree(int x, int y)
{
    if(checks[{x,y}] && checks[{x-1,y-1}] && checks[{x-1,y}] && checks[{x-1,y+1}] 
    && checks[{x,y-1}] && checks[{x,y+1}] && checks[{x+1,y-1}] && checks[{x+1,y}] && checks[{x+1,y+1}]){
        return false;
    }
    return true;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int nknights, x, y;
        cin >> nknights;
        while(nknights--)
        {
            cin>>x>>y;
            checkPositions(x,y);
        }
        //kingposition
        cin>>x>>y;
        if(!checksfree(x, y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        checks.clear();
    }
    return 0;
}