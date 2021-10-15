#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,v;
	bool q[51]={false};
	int counter=0;
	cin>>n>>v;
	for (int i=0;i<n;i++) {
		int k;
		cin>>k;
		for (int j=0;j<k;j++) {
			int s;
			cin>>s;
			if (s<v) {
				q[i]=true;
			}
		}
		if (q[i])
			counter++;
	}
	cout<<counter<<endl;
	for (int i=0;i<n;i++) {
		if (q[i])
			cout<<i+1<<' ';
	}
	return 0;
}
//handle : fyudaa
