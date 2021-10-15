#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> v;
	ll n, maxi = INT_MIN, mini = INT_MAX;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
		maxi = max(maxi, x);
		mini = min(mini, x);
	}
	ll ans = INT_MAX;
	for (ll i = mini; i <= maxi; i++) {
		ll res = 0;
		for (auto x : v) {
			res += (x - i) * (x - i);
		}
		ans = min(ans, res);
	}
	cout << ans << '\n';
	
	return 0;
}
