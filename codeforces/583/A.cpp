#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<int> h,v;
	vector<int> a;
	int n;
	cin>>n;
	for (int i=1;i<=(n*n);i++) {
		int x,y;
		cin>>x>>y;
		if (h.count(x) || v.count(y));
		else {
			a.push_back(i);
			h.insert(x);
			v.insert(y);
		}
	}
	for (int i=0;i<n;i++) {
		cout<<a[i]<<' ';
	}
	return 0;
}
