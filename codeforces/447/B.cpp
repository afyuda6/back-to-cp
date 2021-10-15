#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	map<char,int> w;
	string s;
	int k,res=0,maks=INT_MIN;
	cin>>s>>k;
	for (char a='a';a<='z';a++) {
		cin>>w[a];
		maks=max(maks,w[a]);
	}
	for (int i=0;i<s.length();i++) {
		res+=(i+1)*w[s[i]];
	}
	for (int i=s.length();i<s.length()+k;i++) {
		res+=(i+1)*maks;
	}
	cout<<res<<endl;
	return 0;
}
