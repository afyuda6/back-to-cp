#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	set<int> s;
	set<int>::iterator itr;
	int a[120][120]={{0}};
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) {
		s.insert(i);
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<i;j++) {
			if (a[i][j]==1) s.erase(i);
			if (a[i][j]==2) s.erase(j);
			if (a[i][j]==3) {
				s.erase(i);
				s.erase(j);
			}
		}
	}
	cout<<s.size()<<endl;
	for (itr=s.begin();itr!=s.end();++itr) {
		cout<<*itr<<' ';
	}
	
	return 0;
}
