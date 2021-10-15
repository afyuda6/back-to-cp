#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<int> s;
	map<int,int> m;
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) {
		int x;
		cin>>x;
		m[i]=x;
	}
	for (int i=1;i<=n;i++) {
		s.insert(i);
		int x=m[i];
		while (!s.count(x)) {
			s.insert(x);
			x=m[x];
		}
		cout<<x<<' ';
		s.clear();
	}
	return 0;
}
