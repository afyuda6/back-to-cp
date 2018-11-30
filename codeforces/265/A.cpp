#include <bits/stdc++.h>
using namespace std;
int main() {
	string s,t;
	cin>>s>>t;
	for (int i=0;i<s.length();) {
		for (int j=0;j<t.length();j++) {
			if (t[j]==s[i]) {
				i++;
			}
		}
		cout<<i+1<<endl;
		return 0;
	}
}
