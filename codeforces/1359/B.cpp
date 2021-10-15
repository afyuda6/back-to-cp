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
		ll n, m, x, y;
		cin >> n >> m >> x >> y;
		vector<ll> arr;
		for (ll i = 0; i < n; i++) {
			string s;
			cin >> s;
			ll cnt = 0;
			for (ll j = 0; j < s.length(); j++) {
				if (s[j] == '.') {
					cnt++;
				}
				else {
					if (cnt)
						arr.pb(cnt);
					cnt = 0;
				}
			}
			if (cnt)
				arr.pb(cnt);
		}
		ll res = 0;
		for (auto v : arr) {
			if (x * 2 >= y) {
				res += y * (v / 2) + x * (v % 2);
			}
			else {
				res += x * v;
			}
		}
		cout << res << '\n';
	}
	
	return 0;
}
