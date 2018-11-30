#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int n,b,a,cek=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>s>>b>>a;
		if (b>=2400 && a>b) cek=1;
	}
	if (!cek)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
