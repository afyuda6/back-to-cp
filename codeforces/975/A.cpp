#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<set<int>> res;
	set<int> se[1005];
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		string s;
		cin>>s;
		for (int j=0;j<s.length();j++) {
			se[i].insert(s[j]);
		}
		res.insert(se[i]);
	}
	cout<<res.size()<<endl;
	return 0;
}
