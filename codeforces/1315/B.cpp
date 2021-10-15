#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, p;
		cin >> a >> b >> p;
		string s;
		cin >> s;
		char tmp;
		ll res = -1;
		for (ll i = s.length() - 2; i >= 0; i--) {
			if (i == s.length() - 2) {
				tmp = s[i];
				if (tmp == 'A') {
					if (p < a) {
						res = s.length();
						break;
					}
				}
				else {
					if (p < b) {
						res = s.length();
						break;
					}
				}
				
			}
			else if (tmp != s[i]) {
				if (tmp == 'A') {
					p -= a;
					if (p < b) {
						res = i + 2;
						break;
					}
				}
				else {
					p -= b;
					if (p < a) {
						res = i + 2;
						break;
					}
				}
			}
			tmp = s[i];
		}
		if (res == -1) {
			if (tmp == 'A') {
				if (p >= a)
					res = 1;
			}
			else {
				if (p >= b)
					res = 1;
			}
		}
		cout << res << '\n';
	}
	
	return 0;
}
