#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s,a,cnt=0,maks=INT_MIN;
	cin>>n>>s;
	for (int i=0;i<n;i++) {
		cin>>a;
		cnt+=a;
		if (a>maks)
			maks=a;
	}
	if (cnt-maks<=s)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
