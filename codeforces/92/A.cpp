#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;) {
		if (m-i>=0) {
			m-=i;
			i++;
		}
		else
			break;
		if (i==n+1)
			i=1;
	}
	cout<<m<<endl;
}
