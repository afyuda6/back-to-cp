#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	lli t,s,x;
	bool res;
	cin>>t>>s>>x;
	if (t>x) res=false;
	else if (t==x) res=true;
	else if (t==x-1) res=false;
	else if (x%s==t%s) res=true;
	else if ((x-1)%s==t%s) res=true;
	(res) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
