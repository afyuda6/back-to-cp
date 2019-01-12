#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPalindrome(string s,int l,int r) {
	while (l<r) {
		if (s[l++]!=s[r--]) {
			return false;
		}
	}
	return true;
}
int main() {
	int res=INT_MIN;
	string s;
	cin>>s;
	for (int i=0;i<(int)s.length();i++) {
		for (int j=i;j<(int)s.length();j++) {
			if (!isPalindrome(s,i,j)) {
				res=max(res,j-i+1);
			}
		}
	}
	if (res==INT_MIN)
		cout<<0<<endl;
	else cout<<res<<endl;
	return 0;
}
