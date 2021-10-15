#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	int n;
	cin>>n;
	int s=0;
	for (int i=1;i<n;i++) {
		s=(s+(i%n))%n;
		cout<<s+1<<' ';
	}
	return 0;
}
//handle : fyudaa
