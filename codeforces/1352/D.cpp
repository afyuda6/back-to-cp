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
		deque<ll> v;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		bool alice = true;
		ll lim = 0;
		bool belum = true;
		ll a = 0, b = 0;
		ll res = 0;
		while (!v.empty()) {
			if (alice) {
				ll tmp = 0;
				if (belum) {
					tmp = v[0];
					v.pop_front();
					belum = false;
				}
				else {
					ll cnt = 0;
					for (ll i = 0; i < v.size(); i++) {
						tmp += v[i];
						cnt++;
						if (tmp >= lim)
							break;
					}
					for (ll i = 0; i < cnt; i++) {
						v.pop_front();
					}
				}
				lim = tmp + 1;
				alice = false;
				a += tmp;
			}
			else {
				ll tmp = 0;
				ll cnt = 0;
				for (ll i = v.size() - 1; i >= 0; i--) {
					tmp += v[i];
					cnt++;
					if (tmp >= lim) {
						break;
					}
				}
				for (ll i = 0; i < cnt; i++) {
					v.pop_back();
				}
				lim = tmp + 1;
				alice = true;
				b += tmp;
			}
			res++;
		}
		cout << res << ' ';
		cout << a << ' ' << b << '\n';
	}
	
	return 0;
}
