#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	vector<int> v;
	int n,res=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for (int i=0;i<v.size();i+=2) {
		res+=v[i+1]-v[i];
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
