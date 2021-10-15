#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	int a[5][5]={{0}};
	for (int i=1;i<=3;i++) {
		for (int j=1;j<=3;j++) {
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=3;i++) {
		for (int j=1;j<=3;j++) {
			int res=0;
			res+=a[i][j];
			res+=a[i-1][j];
			res+=a[i+1][j];
			res+=a[i][j-1];
			res+=a[i][j+1];
			if (res%2==0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
