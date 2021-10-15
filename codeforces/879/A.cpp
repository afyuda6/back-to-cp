#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<int> s;
	int n,res;
	cin>>n;
	for (int i=0;i<n;i++) {
		int s,d;
		cin>>s>>d;
		if (i==0)
			res=s;
		else {
			while (s<=res) {
				s+=d;
			}
			res=s;
		}
	}
	cout<<res<<endl;
	return 0;
}
