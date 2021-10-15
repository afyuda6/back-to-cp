#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		vector<ll> v;
		ll k;
		cin >> k;
		string s;
		cin >> s;
		bool sudah = false;
		ll cnt = 0;
		for (ll i = 0; i < k; i++) {
			if (!sudah) {
				if (s[i] == 'A') {
					sudah = true;
				}
			}
			else if (sudah) {
				if (s[i] == 'P') {
					cnt++;
				}
				else if (s[i] == 'A') {
					if (cnt != 0)
						v.pb(cnt);
					cnt = 0;
				}
			}
		}
		if (cnt != 0)
			v.pb(cnt);
		ll res = 0;
		for (auto x : v) {
			res = max(res, x);
		}
		cout << res << '\n';
	}
	
	return 0;
}
