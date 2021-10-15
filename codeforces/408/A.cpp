#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	int k[128],m[128][128];
	int tot[128]={0};
	int n,res=INT_MAX;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>k[i];
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=k[i];j++) {
			cin>>m[i][j];
			tot[i]+=m[i][j]*5;
		}
		tot[i]+=k[i]*15;
		res=min(res,tot[i]);
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
