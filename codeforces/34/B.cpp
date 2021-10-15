#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	vector<int> v;
	int m,n,res=0;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),greater<int>());
	for (int i=0;i<m;i++) {
		if (v.back()>=0)
			break;
		res+=v.back();
		v.pop_back();
	}
	cout<<abs(res)<<endl;
	return 0;
}
//handle : fyudaa
