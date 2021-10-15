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
		vector<ll> v;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		bool tanda;
		if (v[0] > 0)
			tanda = true;
		else
			tanda = false;
		ll res = 0, maks = INT_MIN;
		for (ll i = 0; i < n; i++) {
			if (tanda) {
				if (v[i] > 0) {
					maks = max(maks, v[i]);
				}
				else {
					tanda = false;
					res += maks;
					maks = v[i];
				}
			}
			else {
				if (v[i] < 0) {
					maks = max(maks, v[i]);
				}
				else {
					tanda = true;
					res += maks;
					maks = v[i];
				}
			}
		}
		res += maks;
		cout << res << '\n';
	}
	
	return 0;
}
