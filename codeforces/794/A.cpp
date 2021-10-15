#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	lli a,b,c,n,num,res=0;
	cin>>a>>b>>c;
	cin>>n;
	for (lli i=0;i<n;i++) {
		cin>>num;
		if (num>b && num<c)
			res++;
	}
	cout<<res<<endl;
	return 0;
}
//handle : fyudaa
