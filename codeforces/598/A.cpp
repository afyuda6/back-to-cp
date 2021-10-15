#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	lli t;
	cin>>t;
	for (int i=0;i<t;i++) {
		lli n,deret=0;
		cin>>n;
		deret+=n*(n+1)/2;
		lli loga=log2(n);
		deret-=2*(pow(2,loga+1)-1);
		cout<<deret<<endl;
	}
}
