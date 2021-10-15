#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	int t,L,v,l,r,res=0;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>L>>v>>l>>r;
		res=(L/v)-(r/v)+((l-1)/v);
		cout<<res<<endl;
	}
}
