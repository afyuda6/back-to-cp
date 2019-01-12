#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	set<int> s;
	set<int>::iterator itr;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		s.insert(x);
	}
	if (s.size()==1) {
		cout<<"NO"<<endl;
		return 0;
	}
	itr=s.begin();
	itr++;
	cout<<*itr<<endl;
	return 0;
}
