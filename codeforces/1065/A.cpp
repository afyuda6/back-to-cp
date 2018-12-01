#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,s,a,b,c,res;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>s>>a>>b>>c;
		res=((s/c/a)*a+(s/c/a)*b+(s/c%a));
		cout<<res<<endl;
	}
}
