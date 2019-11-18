#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> a, b;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		vector<ll> s;
		for (ll i = 0; i < n; i++) {
			s.pb(b[i] - a[i]);
		}
		vector<ll> res;
		ll tmp = s[0];
		if (s[0])
			res.pb(s[0]);
		for (ll i = 1; i < n; i++) {
			if (s[i] != tmp) {
				if (s[i])
					res.pb(s[i]);
			}
			tmp = s[i];
		}
		bool ya = true;
		for (auto x : res) {
			if (x < 0) {
				ya = false;
			}
		}
		if (res.size() <= 1 && ya) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
