#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	bool ya=true;
	int n,r=0,l=0;
	string s;
	cin>>n>>s;
	for (int i=0;i<n/2;i++) {
		if (s[i]!='4' && s[i]!='7')
			ya=false;
		l+=s[i]-'0';
	}
	for (int i=n/2;i<n;i++) {
		if (s[i]!='4' && s[i]!='7')
			ya=false;
		r+=s[i]-'0';
	}
	if (l==r && ya)
		ya=true;
	else if (l!=r)
		ya=false;
	(ya) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
