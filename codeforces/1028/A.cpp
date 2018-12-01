#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <pair <int,int>> v;
	char c;
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			cin>>c;
			if (c=='B')
				v.push_back(make_pair(i,j));
		}
	}
	cout<<v[v.size()/2].first<<' '<<v[v.size()/2].second<<endl;
}
