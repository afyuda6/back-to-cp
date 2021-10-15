#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	lli n;
	cin>>n;
	lli lplusw=n/2;
	if (n%2==1)
		cout<<0<<endl;
	else if (lplusw%2==0)
		cout<<lplusw/2-1<<endl;
	else
		cout<<lplusw/2<<endl;
	return 0;
}
