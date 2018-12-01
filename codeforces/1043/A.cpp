#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,cnt=0,res,maks=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (x>maks)
			maks=x;
		cnt+=x;
	}
	for (int i=maks;;i++) {
		if (n*i-cnt>cnt) {
			res=i;
			break;
		}
	}
	cout<<res<<endl;
}
