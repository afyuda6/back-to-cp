#include <bits/stdc++.h>
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<char> v;
	string s;
	cin >> s;
	for (ll i = 0; i < s.length(); i++) {
		if (s[i] != 'B')
			v.pb(s[i]);
		else {
			if (v.size() != 0) {
				v.pop_back();
			}
		}
	}
	for (auto x : v) {
		cout << x;
	}
	
	return 0;
}
