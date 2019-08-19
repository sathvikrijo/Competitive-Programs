#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(0),cin.tie(0)
#define f first
#define s second
#define endl "\n"
using namespace std;


int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int> > intervals(n);
        for(int i=0;i<n ;i++){
            int a,b;
            cin>>a>>b;
            intervals[i]={a,b};
        }
        sort(intervals.begin(),intervals.end());
        while(m--){
            int p;
            cin>>p;
            int low=0,high=n-1,mid;
            bool found = false;
            while(low<=high){
                mid=(low+high)>>1;
                if( p>=intervals[mid].f && p<=intervals[mid].s){
                    found=true;
                    break;
                }
                else if( p >intervals[mid].s)
                    low = mid+1;
                else
                    high = mid-1;

            }
            // cout<<low<<" "<<high<<" "<<mid<<" "<<ans<<endl;
            cout<<"mid: "<<mid<<endl;
            if(found &&  p < intervals[mid].s)
                cout<<"0\n";
            else{
                if(p >= intervals[mid].s)
                    mid++;

                if(mid > n-1)
                    cout<<"-1\n";
                else
                    cout<<intervals[mid].f - p <<endl;


            }
        }
    }

	return 0;
}
