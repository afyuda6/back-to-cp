#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	vi h;
	int a,b,n,num;
	cin>>n>>a>>b;
	for (int i=0;i<n;i++) {
		cin>>num;
		h.push_back(num);
	}
	sort(h.begin(),h.end());
	if (h[b-1]==h[b])
		cout<<0<<endl;
	else
		cout<<h[b]-h[b-1]<<endl;
	return 0;
}
//handle : fyudaa
