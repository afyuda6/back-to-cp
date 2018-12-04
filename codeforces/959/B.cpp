#include <bits/stdc++.h>
using namespace std;
int main() {
	map <string,int> peta;
	long long int n,k,m,cost[100005],w,ans,arr[100005],y;
	string lett[100005],s;
	cin>>n>>k>>m;
	for (long long int i=1;i<=n;i++) {
		cin>>lett[i];
	}
	for (long long int i=1;i<=n;i++) {
		cin>>cost[i];
	}
	for (long long int i=1;i<=k;i++) {
		cin>>w;
		arr[i]=INT_MAX;
		for (long long int j=0;j<w;j++) {
			cin>>y;
			peta[lett[y]]=i;
			arr[i]=min(arr[i],cost[y]);
		}
	}
	for (long long int i=0;i<m;i++) {
		cin>>s;
		ans+=arr[peta[s]];
	}
	cout<<ans<<endl;
}
