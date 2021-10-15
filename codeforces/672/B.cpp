#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<char> vs;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		char c;
		cin>>c;
		vs.insert(c);
	}
	if (n>26)
		cout<<-1<<endl;
	else
		cout<<n-vs.size()<<endl;
	return 0;
}
