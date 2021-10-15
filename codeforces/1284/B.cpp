#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> mi, ma;
	ll n, res = 0, cnt = 0;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll l;
		cin >> l;
		ll mini = INT_MAX;
		ll maxi = -1;
		bool ya = false;
		for (ll j = 0; j < l; j++) {
			ll x;
			cin >> x;
			if (x > mini)
				ya = true;
			mini = min(mini, x);
			maxi = max(maxi, x);
		}
		if (ya) {
			cnt++;
		}
		else {
			mi.pb(mini);
			ma.pb(maxi);
		}
	}
	res += cnt * (2 * (n - cnt) + cnt);
	sort(mi.begin(), mi.end());
	for (auto x : ma) {
		vector<ll>::iterator itr = lower_bound(mi.begin(), mi.end(), x);
		res += (itr - mi.begin());
	}
	cout << res << '\n';
	
	return 0;
}
