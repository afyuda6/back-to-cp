#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	bool ya=false;
	set<char> sub[250];
	string s;
	cin>>s;
	if (s.length()<=2) {
		cout<<"No"<<endl;
		return 0;
	}
	for (int i=0;i<s.length()-2;i++) {
		if (s[i]!='.') sub[i].insert(s[i]);
		if (s[i+1]!='.') sub[i].insert(s[i+1]);
		if (s[i+2]!='.') sub[i].insert(s[i+2]);
		if (sub[i].size()>2) ya=true;
	}
	(ya) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	return 0;
}
