#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	deque<char>::iterator itr;
	deque<char> dq,res;
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		dq.push_back(s[i]);
	}
	int i;
	if (s.length()%2==0) i=0;
	else i=1;
	while (dq.size()) {
		if (i%2==0) {
			res.push_front(dq.back());
			dq.pop_back();
		}
		else {
			res.push_front(dq.front());
			dq.pop_front();
		}
		i++;
	}
	for (int i=0;i<res.size();i++) {
		cout<<res[i];
	}
	return 0;
}
