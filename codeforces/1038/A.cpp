#include <bits/stdc++.h>
using namespace std;
int main() {
	map <char,int> m;
	char x;
	int n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (!m.count(x)) {
			m.insert(pair<char,int>(x,1));
		}
		else {
			m[x]++;
		}
	}
	int mins=INT_MAX;
	for (auto& x: m) {
		if (x.second<mins)
			mins=x.second;
	}
	if (m.size()<k)	cout<<0<<endl;
	else cout<<k*mins<<endl;
}
