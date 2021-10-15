#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	vi x;
	int n,maxi=INT_MIN,mini=INT_MAX;
	cin>>n;
	for (int i=0;i<n;i++) {
		int a; cin>>a;
		x.push_back(a);
		maxi=max(maxi,a);
		mini=min(mini,a);
	}
	for (int i=0;i<n;i++) {
		int maxs,mins;
		if (i==0) {
			maxs=x[n-1]-x[0];
			mins=x[i+1]-x[i];
		}
		else if (i==n-1) {
			maxs=x[n-1]-x[0];
			mins=x[i]-x[i-1];
		}
		else {
			maxs=max(x[i]-x[0],x[n-1]-x[i]);
			mins=min(x[i]-x[i-1],x[i+1]-x[i]);
		}
		cout<<mins<<' '<<maxs<<endl;
	}
	return 0;
}
//handle : fyudaa
