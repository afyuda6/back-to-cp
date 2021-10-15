#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll first = INT_MAX, last = INT_MIN;
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == '1') {
				first = i;
				break;
			}
		}
		for (ll i = s.length() - 1; i >= 0; i--) {
			if (s[i] == '1') {
				last = i;
				break;
			}
		}
		ll res = 0;
		for (ll i = first; i <= last; i++) {
			if (s[i] == '0')
				res++;
		}
		cout << res << '\n';
	}
	
	return 0;
}
