#include <bits/stdc++.h>
using namespace std;
int main() {
	int r[100]={0},c[100]={0},res=0;
	char a;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin>>a;
			if (a=='C') {
				r[i]++;
				c[j]++;
			}
		}
	}
	for (int i=0;i<n;i++) {
		res+=r[i]*(r[i]-1)/2;
	}
	for (int i=0;i<n;i++) {
		res+=c[i]*(c[i]-1)/2;
	}
	cout<<res<<endl;
}
