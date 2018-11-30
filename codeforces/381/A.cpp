#include <bits/stdc++.h>
using namespace std;
int main() {
	deque <int> dq;
	int n,x,s=0,d=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		dq.push_back(x);
	}
	int i=0;
	while (!dq.empty()) {
		if (dq.front()>dq.back()) {
			if (i%2==0) s+=dq.front();
			else d+=dq.front();
			dq.pop_front();
		}
		else {
			if (i%2==0) s+=dq.back();
			else d+=dq.back();
			dq.pop_back();
		}
		i++;
	}
	cout<<s<<' '<<d<<endl;
}
