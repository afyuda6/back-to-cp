#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		set<ll> s;
		map<ll, pii> m;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x, y;
			cin >> x >> y;
			s.insert(x + y);
			m[x + y] = make_pair(x, y);
		}
		pii tmp;
		tmp.first = 0;
		tmp.second = 0;
		bool ya = true;
		if (s.size() != n) {
			ya = false;
		}
		for (auto x : s) {
			if (m[x].first > tmp.first && m[x].second < tmp.second) {
				ya = false;
				break;
			}
			if (m[x].first < tmp.first && m[x].second > tmp.second) {
				ya = false;
				break;
			}
			tmp.first = m[x].first;
			tmp.second = m[x].second;
		}
		if (!ya)
			cout << "NO\n";
		else {
			cout << "YES\n";
			tmp.first = 0;
			tmp.second = 0;
			for (auto x : s) {
				for (ll i = tmp.first; i < m[x].first; i++) {
					cout << "R";
				}
				for (ll i = tmp.second; i < m[x].second; i++) {
					cout << "U";
				}
				tmp.first = m[x].first;
				tmp.second = m[x].second;
			}
			cout << "\n";
		}
	}
	
	return 0;
}
