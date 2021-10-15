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
		vector<ll> e;
		ll n, cnt = 0;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			e.pb(x);
		}
		sort(e.begin(), e.end());
		ll cur = 0, res = 0;
		for (ll i = 0; i < n; i++) {
			cur++;
			if (cur == e[i]) {
				res++;
				cur = 0;
			}
		}
		cout << res << '\n';
	}
	
	return 0;
}
