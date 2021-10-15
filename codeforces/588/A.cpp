#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	int n,mins=INT_MAX,res=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		mins=min(mins,y);
		res+=(x*mins);
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
