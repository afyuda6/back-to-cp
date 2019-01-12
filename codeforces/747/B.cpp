#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	string s;
	cin>>n>>s;
	if (n%4) {
		cout<<"==="<<endl;
		return 0;
	}
	int a=n/4,c=n/4,g=n/4,t=n/4;
	for (int i=0;i<n;i++) {
		if (s[i]=='A') a--;
		else if (s[i]=='C') c--;
		else if (s[i]=='G') g--;
		else if (s[i]=='T') t--;
	}
	if (a<0 || c<0 || g<0 || t<0) {
		cout<<"==="<<endl;
		return 0;
	}
	for (int i=0;i<n;i++) {
		if (s[i]=='?') {
			if (a) {s[i]='A';a--;}
			else if (c) {s[i]='C';c--;}
			else if (g) {s[i]='G';g--;}
			else if (t) {s[i]='T';t--;}
		}
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
