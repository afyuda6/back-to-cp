#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll u = 0, d = 0, r = 0, l = 0;
		string s;
		cin >> s;
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == 'U') u++;
			if (s[i] == 'D') d++;
			if (s[i] == 'R') r++;
			if (s[i] == 'L') l++;
		}
		if (min(l, r) == 0) {
			if (min(u, d)) {
				cout << 2 << '\n';
				cout << "UD" << '\n';
			}
			else {
				cout << 0 << '\n';
				cout << '\n';
			}
		}
		else if (min(u, d) == 0) {
			if (min(l, r)) {
				cout << 2 << '\n';
				cout << "RL" << '\n';
			}
			else {
				cout << 0 << '\n';
				cout << '\n';
			}
		}
		else {
			cout << 2 * (min(u, d) + min(r, l)) << '\n';
			for (ll i = 0; i < min(r, l) / 2; i++) {
				cout << "L";
			}
			for (ll i = 0; i < min(u, d) / 2; i++) {
				cout << "D";
			}
			for (ll i = 0; i < min(r, l); i++) {
				cout << "R";
			}
			for (ll i = 0; i < min(u, d); i++) {
				cout << "U";
			}
			for (ll i = 0; i < min(r, l) - min(r, l) / 2; i++) {
				cout << "L";
			}
			for (ll i = 0; i < min(u, d) - min(u, d) / 2; i++) {
				cout << "D";
			}
			cout << '\n';
		}
	}
	
 	return 0;
}
