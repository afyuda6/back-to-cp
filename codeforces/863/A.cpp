#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
bool isPalindrom(vector<char> str) {
	bool y=true;
	for (int i=0;i<=str.size()/2;i++) {
		if (str[i]!=str[str.size()-1-i])
			y=false;
	}
	return y;
}
int main() {
	vector<char> s;
	char d;
	while (cin>>d)
		s.push_back(d);
	while (s.back()=='0')
		s.pop_back();
	if (isPalindrom(s))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
//handle : fyudaa
