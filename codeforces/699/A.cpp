#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	bool ya=false;
	vector<int> a;
	int n,res=INT_MAX;
	string s;
	cin>>n>>s;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=1;i<n;i++) {
		if (s[i]=='L' && s[i-1]=='R') {
			res=min(res,a[i]-a[i-1]);
			ya=true;
		}
	}
	(ya) ? cout<<res/2<<endl : cout<<-1<<endl;
	return 0;
}
