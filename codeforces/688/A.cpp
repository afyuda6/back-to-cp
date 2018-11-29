#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int n,d,cek,counter=0,res=0;
	cin>>n>>d;
	for (int i=0;i<d;i++) {
		cin>>s;
		cek=0;
		for (int j=0;j<n;j++) {
			if (s[j]=='0') {
				cek=1;
			}
		}
		if (cek)
			counter++;
		else {
			if (counter>res)
				res=counter;
			counter=0;
		}
	}
	if (counter>res)
		res=counter;
	cout<<res<<endl;
}
