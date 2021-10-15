#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		if (i/2%2==0) cout<<'a';
		else if (i/2%2==1) cout<<'b';
	}
	cout<<endl;
	return 0;
}
