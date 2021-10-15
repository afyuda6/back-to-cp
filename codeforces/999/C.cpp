#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,k;
	string s;
	cin>>n>>k>>s;
	int counter=0;
	for (char a='a';a<='z'&&counter<k;a++) {
		for (int i=0;i<s.length()&&counter<k;i++) {
			if (s[i]==a) {
				s[i]='0';
				counter++;
			}
		}
	}
	for (int i=0;i<n;i++) {
		if (s[i]!='0') cout<<s[i];
	}
	return 0;
}
//handle : fyudaa
