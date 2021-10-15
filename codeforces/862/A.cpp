#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<int> s;
	int n,x,res=0;
	cin>>n>>x;
	for (int i=0;i<n;i++) {
		int y;
		cin>>y;
		if (y<x)
			s.insert(y);
		if (y==x)
			res+=1;
	}
	res+=x-s.size();
	cout<<res<<endl;
	return 0;
}
