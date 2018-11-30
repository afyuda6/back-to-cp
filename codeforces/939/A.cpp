#include <bits/stdc++.h>
using namespace std;
int main() {
	map <int,int> f;
	int n,x;
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>x;
		f[i]=x;
	}
	for (int i=1;i<=n;i++) {
		if (i==f[f[f[i]]] && f[i]==f[f[f[f[i]]]] && f[f[i]]==f[f[f[f[f[i]]]]]) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
