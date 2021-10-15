#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	lli b[200005];
	vector<lli> res;
	lli n,counter;
	cin>>n;
	for (int i=0;i<(n/2);i++) {
		cin>>b[i];
		if (i==0)
			counter=0;
		else if (b[i]>b[i-1])
			counter+=b[i]-b[i-1];
		res.push_back(counter);
	}
	for (int i=n/2-1;i>=0;i--) {
		res.push_back(b[i]-res[i]);
	}
	for (int i=0;i<res.size();i++) {
		cout<<res[i]<<' ';
	}
	return 0;
}
//handle : fyudaa
