#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	int n,k,counter=0,give=0,res;
	bool udah=false;
	cin>>n>>k;
	for (int i=1;i<=n;i++) {
		int x;
		cin>>x;
		counter+=x;
		int a=min(counter,8);
		give+=min(counter,8);
		counter-=a;
		if (give>=k && !udah) {
			res=i;
			udah=true;
		}
		//cout<<give<<endl;
	}
	if (!udah)
		cout<<-1<<endl;
	else
		cout<<res<<endl;
	return 0;
}
