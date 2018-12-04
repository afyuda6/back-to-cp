#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> v;
	set <int> s;
	int n,k,x;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	for (int i=0;i<k;i++) {
		if (i>=v.size())
			cout<<0<<endl;
		else if (i==0)
			cout<<v[i]<<endl;
		else
			cout<<v[i]-v[i-1]<<endl;
	}
}
