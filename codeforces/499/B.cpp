#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
string mins(string x,string y) {
	if (x.length()<=y.length())
		return x;
	else
		return y;
	
}
int main() {
	map<string,string> ms;
	int n,m;
	cin>>n>>m;
	for (int i=0;i<m;i++) {
		string first,second;
		cin>>first>>second;
		ms[first]=mins(first,second);
	}
	for (int i=0;i<n;i++) {
		string s;
		cin>>s;
		cout<<ms[s]<<' ';
	}
	return 0;
}
//handle : fyudaa
