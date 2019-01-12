#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,cu=0,cr=0,cl=0,cd=0,res;
	string s;
	cin>>n>>s;
	for (int i=0;i<n;i++) {
		if (s[i]=='U') cu++;
		else if (s[i]=='R') cr++;
		else if (s[i]=='L') cl++;
		else if (s[i]=='D') cd++;
	}
	res=2*min(cu,cd)+2*min(cr,cl);
	cout<<res<<endl;
	return 0;
}
