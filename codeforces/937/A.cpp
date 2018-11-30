#include <bits/stdc++.h>
using namespace std;
int main() {
	set <int> s;
	int n,x;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		s.insert(x);
	}
	if (s.count(0)) cout<<s.size()-1<<endl;
	else cout<<s.size()<<endl;
}
