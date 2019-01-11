#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int q;
	cin>>q;
	for (int i=0;i<q;i++) {
		ll l,r,d;
		cin>>l>>r>>d;
		if (d<l) cout<<d<<endl;
		else cout<<(r/d+1)*d<<endl;
	}
	return 0;
}
