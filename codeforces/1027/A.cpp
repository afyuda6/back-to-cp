#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int T;
	cin>>T;
	for (int i=0;i<T;i++) {
		bool cek=true;
		int n;
		string s;
		cin>>n>>s;
		for (int j=0;j<=n/2;j++) {
			bool cek1=true,cek2=true;
			if (s[j]!=s[n-1-j])
				cek1=false;
			if (abs(s[j]-s[n-1-j])!=2)
				cek2=false;
			if (!cek1 && !cek2)
				cek=false;
		}
		if (cek)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
