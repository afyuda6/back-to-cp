#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

ll fact(ll n) {
	if (n <= 1)
		return 1;
	return n * fact(n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> v;
	ll n, t, ans = 0;
	cin >> n >> t;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pub(x);
	}
	
	ll res = 0;
	ll idx = 0;
	for (ll i = 0; i < n; i++) {
		if (res + v[i] <= t) {
			res += v[i];
		}
		else {
			res -= v[idx];
			idx++;
			i--;
		}
		ans = max(ans, i - idx + 1);
	}
	cout << ans << '\n';
	
	return 0;
}
