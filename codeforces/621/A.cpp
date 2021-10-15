#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<lli> a;
	lli counter=0;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		lli x;
		cin>>x;
		counter+=x;
		if (x%2)
			a.push_back(x);
	}
	sort(a.begin(),a.end());
	if (counter%2 && a.size())
		cout<<counter-a[0]<<endl;
	else
		cout<<counter<<endl;
	return 0;
}
//handle : fyudaa
