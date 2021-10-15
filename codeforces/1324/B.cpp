#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
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
		bool yes = false;
		for (ll i = 0; i < n; i++) {
			bool ya = false;
			for (ll j = i + 2; j < n; j++) {
				if (v[i] == v[j]) {
					ya = true;
					break;
				}
			}
			if (ya) {
				yes = true;
				break;
			}
		}
		if (yes)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	return 0;
}
