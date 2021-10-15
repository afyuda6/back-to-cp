#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v;
	string vow="AEIOUY";
	string s;
	int res=INT_MIN;
	cin>>s;
	for (int i=0;i<s.length();i++)
		for (int j=0;j<vow.length();j++)
			if (s[i]==vow[j])
				v.push_back(i);
	if (v.size()==0)
		res=s.length()+1;
	else {
		res=v.front()+1;
		for (int i=1;i<v.size();i++)
			res=max(res,v[i]-v[i-1]);
		res=max(res,(int)s.length()-v.back());
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
