#include <bits/stdc++.h>
using namespace std;
void createPal(string s) {
	vector <char> v;
	for (int i=0;i<s.length();i++) {
		v.push_back(s[i]);
	}
	for (int i=s.length()-2;i>=0;i--) {
		v.push_back(s[i]);
	}
	for (int i=0;i<v.size();i++) {
		cout<<v[i];
	}
	cout<<endl;
}
bool isPal(string s) {
	for (int i=0;i<=s.length()/2;i++) {
		if (s[i]!=s[s.length()-i-1])
			return false;
	}
	return true;
}
int main() {
	string s;
	cin>>s;
	if (isPal(s)) {
		cout<<s<<endl;
		return 0;
	}
	else {
		createPal(s);
		return 0;
	}
}
