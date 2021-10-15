#include <bits/stdc++.h>
using namespace std;
int main() {
	char tmp;
	char s[51];
	int n,t;
	cin>>n>>t;
	for (int i=0;i<n;i++) {
		cin>>s[i];
	}
	for (int j=0;j<t;j++) {
		for (int i=0;i<n-1;i++) {
			if (s[i]=='B' && s[i+1]=='G') {
				tmp=s[i];
				s[i]=s[i+1];
				s[i+1]=tmp;
				i++;
			}
		}
	}
	for (int i=0;i<n;i++) {
		cout<<s[i];
	}
	cout<<endl;
}