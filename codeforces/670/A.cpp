#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int n;
	cin>>n;
	if (n%7==0)
		cout<<n/7*2<<' '<<n/7*2<<endl;
	else
		cout<<n*7/7-n/7*5-min(5,n%7)<<' '<<n/7*2+min(2,n%7)<<endl;
	return 0;
}
