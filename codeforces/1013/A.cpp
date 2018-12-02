#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,cnt=0,cnt2=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		cnt+=x;
	}
	for (int i=0;i<n;i++) {
		cin>>x;
		cnt2+=x;
	}
	if (cnt2>cnt)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
}
