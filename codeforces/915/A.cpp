#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,t=INT_MAX,x,mins=INT_MAX;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (k%x==0)
			t=k/x;
		mins=min(mins,t);
	}
	cout<<mins<<endl;
}