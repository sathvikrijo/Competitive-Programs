#include<bits/stdc++.h>
#define llu long long unsigned
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        llu int m, n, q, x, y, count = 0, result, rowECount=0, rowOCount=0, colECount=0, colOCount=0;
        cin>>m>>n>>q;
        llu int rowSide[n+1] = {0}, colSide[m+1] = {0}; 
        while(q--)
        {
            cin>>x>>y;
            rowSide[y] += 1;
            colSide[x] += 1;
        }
        for(int ritr=1; ritr<=n; ritr++)
        {
            if(rowSide[ritr]%2 == 0)
                rowECount++;
            else
                rowOCount++;
        }
        for(int citr=1; citr<=m; citr++)
        {
            if(colSide[citr]%2 == 0)
                colECount++;
            else
                colOCount++;
        }
        //cout<<rowECount<<colOCount<< "-" <<rowOCount<<colECount<<endl;
        count = (rowECount*colOCount) + (rowOCount*colECount);
        /*for(llu int row=1; row<=m; row++)
        {
            for(llu int col=1; col<=n; col++)
            {
                result = rowSide[col] + colSide[row];
                cout<<result<<" ";
                if(result%2 != 0)
                    count++;
            }
            cout<<endl;
        }*/
        cout<<count<<endl;
    }
    return 0;
}