#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	set<char> se;
	vector<char> ve;
	int t;
	string s;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>s;
		for (int j=0;j<s.length();j++) {
			se.insert(s[j]);
			ve.push_back(s[j]);
		}
		sort(ve.begin(),ve.end());
		if (se.size()==1)
			cout<<-1<<endl;
		else {
			for (int j=0;j<ve.size();j++)
				cout<<ve[j];
			cout<<endl;
		}
		se.clear();
		ve.clear();
	}
	return 0;
}
//handle : fyudaa
