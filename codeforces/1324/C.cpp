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
		string lr;
		cin >> lr;
		v.pb(-1);
		for (ll i = 0; i < lr.length(); i++) {
			if (lr[i] == 'R')
				v.pb(i);
		}
		v.pb(lr.length());
		ll res = 0;
		for (ll i = 1; i < v.size(); i++) {
			res = max(res, v[i] - v[i - 1]);
		}
		cout << res << '\n';
	}
	
	return 0;
}
