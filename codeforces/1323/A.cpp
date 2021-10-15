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
		vector<ll> v;
		ll n;
		cin >> n;
		ll res = 0;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x % 2 == 0)
				res = i + 1;
			v.pb(x);
		}
		ll res2 = 0;
		if (res == 0) {
			for (ll i = 0; i < n - 1; i++) {
				if (v[i] % 2 and v[i + 1] % 2) {
					res = i + 1;
					res2 = i + 2;
				}
			}
		}
		if (res) {
			if (res2) {
				cout << 2 << '\n';
				cout << res << ' ' << res2 << '\n';
			}
			else {
				cout << 1 << '\n';
				cout << res << '\n';
			}
		}
		else
			cout << -1 << '\n';
	}
    	
    return 0;
}
