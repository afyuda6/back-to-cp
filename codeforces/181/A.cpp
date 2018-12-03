#include <bits/stdc++.h>
using namespace std;
int main() {
	 int n,m,x[101]={0},y[101]={0};
	 char c;
	 cin>>n>>m;
	 for (int i=1;i<=n;i++) {
 		for (int j=1;j<=m;j++) {
 			cin>>c;
 			if (c=='*') {
 				x[i]++;
 				y[j]++;
 			}
 		}
 	}
 	for (int i=1;i<=n;i++) {
 		if (x[i]==1)
 			cout<<i<<' ';
 	}
 	for (int i=1;i<=m;i++) {
 		if (y[i]==1)
 			cout<<i<<endl;
 	}
}