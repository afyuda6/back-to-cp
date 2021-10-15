#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	int n,m,maxi=INT_MIN,res;
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		int x;
		cin>>x;
		if ((int)ceil((float)x/m)>=maxi) {
			maxi=(int)ceil((float)x/m);
			res=i;
		}
	}
	cout<<res<<endl;
	return 0;
}
