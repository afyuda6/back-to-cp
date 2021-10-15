#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if (s[i]=='1') {
			if (s[i+1]=='4') {
				if (s[i+2]=='4') {
					i+=2;
					continue;
				}
				i+=1;
				continue;
			}
			continue;
		}
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	return 0;
}
//handle : fyudaa
