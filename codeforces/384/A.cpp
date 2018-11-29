#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,c=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if ((i+j)%2==0) c++;
		}
	}
	cout<<c<<endl;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if ((i+j)%2==0) cout<<'C';
			else cout<<'.';
		}
		cout<<endl;
	}
}
