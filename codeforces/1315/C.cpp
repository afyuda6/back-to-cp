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
		set<ll> fst;
		vector<ll> snd, vec;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			vec.pb(x);
			fst.insert(x);
		}
		bool minsatu = false;
		vector<pii> ans;
		for (ll i = 0; i < n; i++) {
			bool nemu = false;
			for (ll j = vec[i] + 1; j <= 2 * n; j++) {
				if (!fst.count(j)) {
					fst.insert(j);
					ans.pb(mp(vec[i], j));
					nemu = true;
					break;
				}
			}
			if (!nemu) {
				minsatu = true;
				break;
			}
		}
		if (minsatu)
			cout << -1 << '\n';
		else
			for (ll i = 0; i < n; i++) {
				cout << ans[i].first << ' ';
				cout << ans[i].second << " \n"[i == n - 1];
			}
	}
	
	return 0;
}
