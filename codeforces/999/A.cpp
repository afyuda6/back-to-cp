#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,a[100],cnt=0;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=0;i<n;) {
		if (a[i]<=k) {
			cnt++;
			i++;
			continue;
		}
		else if (a[n-1]<=k) {
			cnt++;
			n--;
			continue;
		}
		else break;
	}
	cout<<cnt<<endl;
}
