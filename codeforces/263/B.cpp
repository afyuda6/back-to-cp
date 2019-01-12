#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	vector<int> a;
	int n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),greater<int>());
	if (k>n) cout<<-1<<endl;
	else cout<<a[k-1]<<' '<<a[k-1]<<endl;
	return 0;
}
