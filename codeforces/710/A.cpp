#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	string s;
	cin>>s;
	int res=8;
	if (s=="a1" || s=="a8" || s=="h1" || s=="h8")
		res=3;
	else if (s[0]=='a' || s[0]=='h')
		res=5;
	else if (s[1]=='1' || s[1]=='8')
		res=5;
	cout<<res<<endl;
	return 0;
}
