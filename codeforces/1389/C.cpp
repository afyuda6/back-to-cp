#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		map<ll, ll> f;
		string s;
		cin >> s;
		ll maks = 0;
		for (ll i = 0; i <= 9; i++) {
			for (ll j = 0; j <= 9; j++) {
				ll res = 0;
				bool first = true;
				for (ll k = 0; k < s.length(); k++) {
					if (first == true) {
						if (s[k] - '0' == i) {
							res++;
							first = false;
						}
					}
					else {
						if (s[k] - '0' == j) {
							res++;
							first = true;
						}
					}
				}
				if (res > maks && res % 2 == 0) {
					maks = res;
				}
				else if (res > maks && (res % 2 && i == j)) {
					maks = res;
				}
			}
		}
		cout << s.length() - maks << '\n';
	}
	
	return 0;
}
