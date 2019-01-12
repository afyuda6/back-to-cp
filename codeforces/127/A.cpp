#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	cout<<setprecision(6)<<fixed;
	float res=0;
	int n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		int x,y,tx,ty;
		cin>>x>>y;
		if (i!=0) {
			res+=(float)sqrt((x-tx)*(x-tx)+(y-ty)*(y-ty))/50;
		}
		tx=x;
		ty=y;
	}
	cout<<res*k<<endl;
	return 0;
}
