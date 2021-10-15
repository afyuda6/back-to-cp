#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int t,n,k;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>n>>k;
		for (int i=0;i<(n/k);i++) {
			for (int j=0;j<k;j++) {
				cout<<alpha[j];
			}
		}
		for (int i=0;i<(n%k);i++) {
			cout<<alpha[i];
		}
		cout<<endl;
	}
	return 0;
}
//handle : fyudaa
