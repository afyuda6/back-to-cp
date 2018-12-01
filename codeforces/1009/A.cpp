#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> c,a;
	int n,m,game,bill,res=0,tmp,cek;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin>>game;
		c.push_back(game);
	}
	for (int i=0;i<m;i++) {
		cin>>bill;
		a.push_back(bill);
	}
	tmp=0;
	for (int i=0;i<m;i++) {
		cek=0;
		for (int j=tmp;j<n;j++) {
			if (a[i]>=c[j]) {
				res++;
				tmp=j+1;
				break;
			}
			if (j==n-1) cek=1;
		}
		if (cek) break;
	}
	cout<<res<<endl;
}
