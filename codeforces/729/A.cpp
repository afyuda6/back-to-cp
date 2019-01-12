#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	string s,res;
	cin>>n>>s;
	for (int i=0;i<n;i++) {
		int cek=0;
		while (s[i]=='o' && s[i+1]=='g' && s[i+2]=='o') {
			i+=2;
			cek=1;
		}
		if (cek) {
			res.push_back('*');
			res.push_back('*');
			res.push_back('*');
			continue;
		}
		res.push_back(s[i]);
	}
	cout<<res<<endl;
	return 0;
}
