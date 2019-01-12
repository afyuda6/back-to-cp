#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	string days[10]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	map<string,int> m;
	bool cek=false;
	for (int i=0;i<7;i++) {
		m[days[i]]=i;
	}
	string a,b;
	cin>>a>>b;
	if (m[a]<m[b]) {
		if (m[b]-m[a]==2) cek=true;
		else if (m[b]-m[a]==3) cek=true;
	}
	else if (m[a]==m[b]) cek=true;
	else if (m[a]>m[b]) {
		if (m[b]+7-m[a]==2) cek=true;
		else if (m[b]+7-m[a]==3) cek=true;
	}
	//cout<<m[a]<<' '<<m[b]<<endl;
	(cek) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
