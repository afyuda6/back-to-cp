#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	for (int i=s.length()-1;i>=0;i--)
		s.push_back(s[i]);
	cout<<s;
	return 0;
}
//handle : fyudaa
