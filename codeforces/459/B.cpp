#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	vector<int> v;
	lli n;
	lli mini=INT_MAX;
	lli maxi=INT_MIN;
	lli mi=0,ma=0;
	cin>>n;
	for (lli i=0;i<n;i++) {
		lli x;
		cin>>x;
		v.push_back(x);
		mini=min(mini,x);
		maxi=max(maxi,x);
	}
	for (lli i=0;i<v.size();i++) {
		if (v[i]==mini)
			mi++;
		if (v[i]==maxi)
			ma++;
	}
	lli un=(mi-1)*((mi-1)+1)/2;
	if (maxi==mini && ma==mi)
		cout<<0<<' '<<un<<endl;
	else
		cout<<maxi-mini<<' '<<mi*ma<<endl;
}
