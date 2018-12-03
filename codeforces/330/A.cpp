#include <bits/stdc++.h>
using namespace std;
int main() {
	char a;
	int r,c,x[11]={0},y[11]={0},cr=0,cc=0,res=0;
	cin>>r>>c;
	for (int i=0;i<r;i++) {
		for (int j=0;j<c;j++) {
			cin>>a;
			if (a=='S') {
				x[i]=1;
				y[j]=1;
			}
		}
	}
	for (int i=0;i<r;i++) {
		if (x[i]==0) {
			res+=c;
			cr++;
		}
	}
	for (int i=0;i<c;i++) {
		if (y[i]==0) {
			res+=r;
			cc++;
		}
	}
	cout<<res-cr*cc<<endl;
}
