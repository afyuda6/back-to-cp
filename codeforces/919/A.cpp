#include <bits/stdc++.h>
using namespace std;
int main() {
	float mins=FLT_MAX;
	int n,m,a,b;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		if ((float)a/b<mins)
			mins=(float)a/b;
	}
	cout<<setprecision(6)<<fixed;
	cout<<mins*m<<endl;
}
