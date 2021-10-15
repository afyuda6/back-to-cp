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
		vector<ll> v;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		reverse(v.begin(), v.end());
		ll mini = v[0];
		ll res = 0;
		for (ll i = 1; i < n; i++) {
			if (v[i] <= mini)
				mini = v[i];
			else
				res++;
		}
		cout << res << '\n';
	}
	
		
	return 0;
}
