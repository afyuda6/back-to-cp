#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<int> a,b;
	bool ya=false;
	int n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=0;i<k;i++) {
		int x;
		cin>>x;
		b.push_back(x);
	}
	sort(b.begin(),b.end());
	for (int i=0;i<n;i++) {
		if (a[i]==0) {
			a[i]=b.back();
			b.pop_back();
		}
	}
	for (int i=1;i<n;i++) {
		if (a[i-1]>a[i])
			ya=true;
	}
	(ya) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	return 0;
}
