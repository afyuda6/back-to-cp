#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	vector<int> a;
	int n,counter=0,ans=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		if (x!=0)
			counter++;
		else if (x==0 && counter) {
			a.push_back(counter);
			counter=0;
		}
	}
	if (counter) a.push_back(counter);
	ans+=(a.size()-1);
	for (int i=0;i<a.size();i++) {
		ans+=a[i];
	}
	cout<<max(0,ans)<<endl;
	return 0;
}
