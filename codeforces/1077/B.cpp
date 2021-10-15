#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<int> a;
	int n;
	int res=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=0;i<n-2;i++) {
		if (a[i]==1&&a[i+1]==0&&a[i+2]==1) {
			res++;
			a[i+2]=0;
		}
	}
	cout<<res<<endl;
	return 0;
}
