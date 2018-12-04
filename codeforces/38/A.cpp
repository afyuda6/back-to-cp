#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,d[105],res=0;
	cin>>n;
	for (int i=1;i<n;i++) {
		cin>>d[i];
	}
	cin>>a>>b;
	for (int i=a;i<b;i++) {
		res+=d[i];
	}
	cout<<res<<endl;
}