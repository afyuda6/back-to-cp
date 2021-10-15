#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	string a,b;
	lli n,k,ans=0,res=0;
	cin>>n>>k;
	cin>>a>>b;
	for (lli i=0;i<n;i++) {
		res=min(res*2+b[i]-a[i],k);
		ans+=min(res+1,k);
	}
	cout<<ans<<endl;
}
