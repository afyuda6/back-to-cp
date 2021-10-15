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
		bool ya = false;
		ll res = 0;
		vector<ll> a, b;
		ll n, s;
		cin >> n >> s;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		ll sum = 0;
		for (ll i = 0; i < n; i++) {
			if (sum + a[i] <= s) {
				sum += a[i];
				b.pb(a[i]);
			}
			else {
				sum += a[i];
				b.pb(a[i]);
				ya = true;
				break;
			}
		}
		ll maks = -1;
		for (ll i = 0; i < b.size(); i++) {
			if (b[i] > maks) {
				maks = b[i];
				res = i + 1;
			}
		}
		if (!ya)
			cout << 0 << '\n';
		else
			cout << res << '\n';
	}
	
	return 0;
}
