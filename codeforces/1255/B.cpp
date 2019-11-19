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
		vector<ll> a;
		ll n, m, sum = 0;
		cin >> n >> m;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			sum += x;
			a.pb(x);
		}
		ll mini = INT_MAX;
		ll mini2 = INT_MAX;
		ll idx = -1;
		ll idx2 = -1;
		for (auto x : a) {
			mini = min(x, mini);
		}
		for (ll i = 0; i < n; i++) {
			if (a[i] == mini) {
				a[i] = 10001;
				idx = i + 1;
				break;
			}
		}
		for (auto x : a) {
			mini2 = min(x, mini2);
		}
		for (ll i = 0; i < n; i++) {
			if (a[i] == mini2) {
				idx2 = i + 1;
				break;
			}
		}
		if (m < n || n == 2) {
			cout << -1 << '\n';
		}
		else {
			sum *= 2;
			sum += (m - n) * (mini + mini2);
			cout << sum << '\n';
			for (ll i = 1; i <= n; i++) {
				if (i == n) {
					cout << i << ' ' << 1 << '\n';
				}
				else {
					cout << i << ' ' << i + 1 << '\n';
				}
			}
			for (ll i = 0; i < m - n; i++) {
				cout << idx << ' ' << idx2 << '\n';
			}
		}
	}
	
	return 0;
}
