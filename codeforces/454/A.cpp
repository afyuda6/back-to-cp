#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (i+j<(n/2)) cout<<'*';
			else if (i+j>n+(n/2)-1) cout<<'*';
			else if (i-j>(n/2)) cout<<'*';
			else if (j-i>(n/2)) cout<<'*';
			else cout<<'D';
		}
		cout<<endl;
	}
}
