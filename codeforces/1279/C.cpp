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
		vector<ll> idx(100005);
		ll n, m, res = 0;
		cin >> n >> m;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			idx[x] = i;
		}
		ll cnt = 0, maks = -1;
		for (ll i = 0; i < m; i++) {
			ll y;
			cin >> y;
			if (idx[y] > maks) {
				res += 2 * (idx[y] - cnt) + 1;
				maks = idx[y];
			}
			else
				res++;
			cnt++;
		}
		cout << res << '\n';
	}
	
	return 0;
}
