#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli min(lli x,lli y) {
	if (x<=y)
		return x;
	else
		return y;
}
int main() {
	lli n,m,a,b,res=0;
	cin>>n>>m>>a>>b;
	res=min(n%m*b,(m-n%m)*a);
	cout<<res<<endl;
	return 0;
}
