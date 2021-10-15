#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> a[5050];
	map<ll, ll> f;
	vector<ll> res(5050);
	
	ll n, k;
	cin >> n >> k;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a[x].pb(i);
		f[x]++;
	}
	for (ll i = 1; i <= 5000; i++) {
		if (f[i] > k) {
			cout << "NO\n";
			return 0;
		}
	}
	ll rd = 0;
	for (ll i = 1; i <= 5000; i++) {
		for (ll j = 0; j < a[i].size(); j++) {
			res[a[i][j]] = (rd % k) + 1;
			rd++;
		}
	}
	cout << "YES\n";
	for (ll i = 0; i < n; i++) {
		cout << res [i] << ' ';
	}
	
	return 0;
}
