#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	int n,w,counter=0;
	int mini=0;
	int maxi=0;
	cin>>n>>w;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		counter+=x;
		mini=min(mini,counter);
		maxi=max(maxi,counter);
	}
	if (maxi-mini>w)
		cout<<0<<endl;
	else if (maxi>w)
		cout<<0<<endl;
	else if (-mini>w)
		cout<<0<<endl;
	else
		cout<<(w+1)-maxi+mini<<endl;
}
