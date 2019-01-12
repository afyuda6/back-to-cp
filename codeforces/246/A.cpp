#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	cin>>n;
	if (n==1 || n==2)
		cout<<-1<<endl;
	else
		for (int i=n;i>0;i--) {
			cout<<i;
			if (i!=1) cout<<' ';
			else cout<<endl;
		}
	return 0;
}
