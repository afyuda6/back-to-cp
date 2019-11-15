#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
  
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<pii> v;
	ll n, d, ans = 0;
	cin >> n >> d;
	for (ll i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		v.pb({x, y});
	}
	sort(v.begin(), v.end());
	ll res = 0;
	ll idx = 0;
	for (ll i = 0; i < n; i++) {
		if (v[i].first - v[idx].first < d) {
			res += v[i].second;
		}
		else {
			res -= v[idx].second;
			idx++;
			i--;
		}
		ans = max(ans, res);
	}
	cout << ans << '\n';
	
 	return 0;
}
