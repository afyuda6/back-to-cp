#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int a[2001],counter[2001];
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=0;i<n;i++) {
		counter[i]=1;
		for (int j=0;j<n;j++) {
			if (i==j)
				continue;
			else if (a[j]>a[i])
				counter[i]++;
		}
	}
	for (int i=0;i<n;i++) {
		cout<<counter[i]<<' ';
	}
	return 0;
}
//handle : fyudaa
