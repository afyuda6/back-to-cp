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
		vector<ll> a;
		ll n, res = -1;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		for (ll i = 1; i < n; i++) {
			if (abs(a[i] - a[i - 1]) >= 2) {
				res = i;
				break;
			}
		}
		if (res != -1) {
			cout << "YES\n";
			cout << res << ' ' << res + 1 << '\n';
		}
		else {
			cout << "NO\n";
		}
	}
	
	return 0;
}
