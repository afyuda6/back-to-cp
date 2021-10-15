#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n,res=0;
	cin>>n;
	res+=2*n-1;
	for (int i=0;i<n;i++) {
		int x,t;
		cin>>x;
		if (i==0)
			res+=x;
		else if (i!=0) {
			res+=abs(x-t);
		}
		t=x;
	}
	cout<<res<<endl;
	return 0;
}
