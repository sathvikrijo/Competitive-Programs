#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[5005],i,j,k,ans;
int main()
{
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	scanf("%d",&t);
	for(int xxx=1;xxx<=t;xxx++)
	{
		printf("Case #%d: ",xxx);
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++)scanf("%d",a+i);
		sort(a+1,a+n+1);
		for(i=k=1,ans=0;i<=n;k++)
		{
		    cout<<"i: "<<i<<"\n";
			j=min(i+m,n+1);
			cout<<"j: "<<j<<"\ti+m: "<<i+m<<"\tn+1: "<<n+1<<endl<<"ans: "<<ans;
			ans+=j-i;
			cout<<"\tans: "<<ans<<"\t"<<j-i<<endl;
			i=j;
			for(;i<=n&&a[i]<=k;i++);
			cout<<"updated i: "<<i<<endl<<endl;
		}
		printf("%d\n",ans);
	}
	return 0;
}

