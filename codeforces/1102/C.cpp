#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> v;
	ll n, x, y;
	cin >> n >> x >> y;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.pb(a);
	}
	sort(v.begin(), v.end());
	if (x > y) {
		cout << n << '\n';
	}
	else {
		ll res = 0;
		for (ll i = 0; i < n; i += 2) {
			if (v[i] <= x) {
				res++;
			}
		}
		cout << res << '\n';
	}
	
	return 0;
}
