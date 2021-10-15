#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	map<int,int> m;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		m[x]++;
	}
	if (m.size()!=2)
		cout<<"NO"<<endl;
	else {
		auto it1=m.cbegin();
		auto it2=++it1;
		--it1;
		if (it1->second!=it2->second)
			cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl;
			for (auto it=m.cbegin();it!=m.cend();++it) {
				cout<<it->first<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
