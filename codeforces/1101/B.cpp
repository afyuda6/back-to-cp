#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int counter=0;
	string s;
	cin>>s;
	int cek=0;
	for (int i=0;i<s.length();i++) {
		if (s[i]=='[' && cek==0) cek=-1;
		else if (s[i]==':' && cek==-1){cek=i;break;}
	}
	int cok=0;
	for (int i=s.length()-1;i>=0;i--) {
		if (s[i]==']' && cok==0) cok=-1;
		else if (s[i]==':' && cok==-1){cok=i;break;}
	}
	for (int i=cek+1;i<cok;i++) {
		if (s[i]=='|') counter++;
	}
	//cout<<cek<<cok<<endl;
	if (cek>0 && cok>0 && cek<cok) cout<<4+counter<<endl;
	else cout<<-1<<endl;
	return 0;
}
