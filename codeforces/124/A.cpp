#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,res=0;
	cin>>n>>a>>b;
	for (int i=0;i<n;i++) {
		if (i>=a && n-i-1<=b) {
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
