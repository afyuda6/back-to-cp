#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n,k;
	cin>>n>>k;
	for (int i=0;i<=n*k;i+=k) {
		for (int j=0;j<k;j++) {
			//cout<<i/k<<' '<<j<<endl;
			if (i/k*j==n) {
				cout<<i+j<<endl;
				return 0;
			}
		}
	}
	return 0;
}
