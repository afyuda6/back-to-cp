#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll n,maks=INT_MIN,mins=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++) {
		char q;
		cin>>q;
		if (q=='+') {
			ll x,y;
			cin>>x>>y;
			maks=max(maks,max(x,y));
			mins=max(mins,min(x,y));
		}
		else if (q=='?') {
			ll h,w;
			cin>>h>>w;
			if (max(h,w)>=maks && min(h,w)>=mins) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}
