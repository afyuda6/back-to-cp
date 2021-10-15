#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n,L,a,t=0,l=0,res=0;
	int tt=0,tl=0;
	cin>>n>>L>>a;
	for (int i=0;i<n;i++) {
		cin>>t>>l;
		res+=(t-tl-tt)/a;
		tt=t;
		tl=l;
	}
	res+=(L-tl-tt)/a;
	cout<<res<<endl;
	return 0;
}
