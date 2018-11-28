#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,arr[101]={0},x,y;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin>>x;
		for (int j=0;j<x;j++) {
			cin>>y;
			arr[y]++;
		}
	}
	for (int i=1;i<=m;i++) {
		if (!arr[i]) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
