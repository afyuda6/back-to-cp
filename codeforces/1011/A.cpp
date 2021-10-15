#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	map<int,int> m;
	int c=1;
	for (char a='a';a<='z';a++) {
		m[a]=c++;
	}
	int n,k,res=0;
	string s;
	cin>>n>>k>>s;
	sort(s.begin(),s.end());
	//cout<<s<<endl;
	char tmp;
	for (int i=0;i<n;i++) {
		if (i==0) {
			res+=m[s[i]];
			k--;
			tmp=s[i];
		}
		else if (s[i]-tmp>1) {
			res+=m[s[i]];
			k--;
			tmp=s[i];
		}
		if (!k)
			break;
	}
	if (!k)
		cout<<res<<endl;
	else
		cout<<-1<<endl;
	return 0;
}
