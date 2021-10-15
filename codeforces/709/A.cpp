#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	lli n,b,d,x;
	cin>>n>>b>>d;
	lli counter=0,res=0;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (x>b)
			continue;
		counter+=x;
		if (counter>d) {
			counter=0;
			res++;
		}
	}
	if (counter>d) {
		counter=0;
		res++;
	}
	cout<<res<<endl;
	return 0;
}
