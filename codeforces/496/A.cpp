#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<int> a;
	int n,res=INT_MAX,lim=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=1;i<n;i++) {
		lim=max(lim,a[i]-a[i-1]);
	}
	for (int i=2;i<n;i++) {
		res=min(res,a[i]-a[i-2]);
	}
	cout<<max(lim,res)<<endl;
	return 0;
}
