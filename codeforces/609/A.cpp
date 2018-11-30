#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> a;
	int n,m,x,res;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),greater<int>());
	for (int i=1;i<a.size();i++) {
		a[i]+=a[i-1];
	}
	for (int i=0;i<a.size();i++) {
		if (a[i]>=m) {
			res=i+1;
			break;
		}
	}
	cout<<res<<endl;
}
