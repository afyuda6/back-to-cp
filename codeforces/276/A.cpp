#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n,k,ans=INT_MIN,res;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		int f,t;
		cin>>f>>t;
		if (t>k)
			res=f-(t-k);
		else
			res=f;
		ans=max(ans,res);
	}
	cout<<ans<<endl;
}
