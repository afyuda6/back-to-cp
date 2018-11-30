#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> b,c;
	int sb=0,sc=0;
	int n,x;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (x>=0) b.push_back(x);
		else c.push_back(x);
	}
	for (int i=0;i<b.size();i++) {
		sb+=b[i];
	}
	for (int i=0;i<c.size();i++) {
		sc+=c[i];
	}
	cout<<sb-sc<<endl;
}
