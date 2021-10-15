#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n*n/2;i++) {
		cout<<i<<' ';
		cout<<n*n+1-i<<endl;
	}
	return 0;
}
