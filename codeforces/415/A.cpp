#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	int lamp[101]={0};
	int b;
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=m;i++) {
		cin>>b;
		for (int j=b;j<=n;j++)
			if (lamp[j]==0)
				lamp[j]=b;
	}
	for (int i=1;i<=n;i++) {
		cout<<lamp[i]<<' ';
	}
	cout<<endl;
	return 0;
}
//handle : fyudaa
