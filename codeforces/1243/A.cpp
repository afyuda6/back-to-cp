#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll k;
	cin >> k;
	while (k--) {
		vector<ll> v;
		ll n, res = 0;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		for (ll i = 0; i < n; i++) {
			res = max(res, min(v[i], i+1));
		}
		cout << res << '\n';
	}
	
	return 0;
}
