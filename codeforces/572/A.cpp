#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	vector<int> a,b;
	int na,nb;
	cin>>na>>nb;
	int k,m;
	cin>>k>>m;
	for (int i=0;i<na;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=0;i<nb;i++) {
		int x;
		cin>>x;
		b.push_back(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<int>());
	if (a[k-1]<b[m-1])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
