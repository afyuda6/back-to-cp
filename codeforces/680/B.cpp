#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<int> v,r,l;
	int n,a,res=0;
	cin>>n>>a;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}
	if (v[a-1]==1) res++;
	for (int i=a;i<n;i++) r.push_back(v[i]);
	for (int i=a-2;i>=0;i--) l.push_back(v[i]);
	int m=min(r.size(),l.size());
	for (int i=0;i<m;i++) if (l[i]==1 && r[i]==1) res+=2;
	for (int i=m;i<l.size();i++) if (l[i]==1) res++;
	for (int i=m;i<r.size();i++) if (r[i]==1) res++;
	cout<<res<<endl;
	return 0;
}
