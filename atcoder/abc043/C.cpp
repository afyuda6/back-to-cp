#include <bits/stdc++.h>
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> v;
	ll n, ans = INT_MAX, mini = 101, maxi = -101;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		mini = min(x, mini);
		maxi = max(x, maxi);
		v.pb(x);
	}
	for (ll i = mini; i <= maxi; i++) {
		ll res = 0;
		for (ll j = 0; j < n; j++) {
			res += (v[j] - i) * (v[j] - i);
		}
		ans = min(res, ans);
	}
	cout << ans;
	
	return 0;
}
