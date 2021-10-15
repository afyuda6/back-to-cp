#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli max1(lli x, lli y) {
	if (x>=y)
		return x;
	else
		return y;
}
int main() {
	lli x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	lli maxi=max1(abs(x2-x1),abs(y2-y1));
	cout<<maxi<<endl;
	return 0;
}
