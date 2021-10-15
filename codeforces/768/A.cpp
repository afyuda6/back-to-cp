#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	deque<int> a;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	if (a.front()==a.back()) {
		cout<<0<<endl;
		return 0;
	}
	int low=a.front();
	int high=a.back();
	while (a.front()==low) {
		a.pop_front();
	}
	while (a.back()==high) {
		a.pop_back();
	}
	cout<<a.size()<<endl;
	return 0;
}
