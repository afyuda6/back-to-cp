#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<pair<int,int>> v;
	vector<int> res;
	int n,ans=0,tmp;
	string s;
	cin>>n>>s;
	int x=0,y=0;
	for (int i=0;i<s.length();i++) {
		if (s[i]=='U') y++;
		else if (s[i]=='R') x++;
		v.push_back(make_pair(x,y));
	}
	for (int i=0;i<v.size();i++) {
		if (v[i].first>v[i].second) res.push_back(1);
		else if (v[i].first<v[i].second) res.push_back(-1);
	}
	for (int i=0;i<res.size();i++) {
		if (i==0)
			tmp=res[i];
		else {
			if (res[i]==tmp)
				res[i]=0;
			else
				tmp=res[i];
		}
		if (res[i]!=0)
			ans++;
	}
	cout<<ans-1<<endl;
	return 0;
}
