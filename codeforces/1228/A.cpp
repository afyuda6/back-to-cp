#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll l, r;
	cin >> l >> r;
	for (ll i = l; i <= r; i++) {
		bool ya = true;
		set<ll> se;
		ll num = i;
		while (num) {
			if (se.count(num % 10)) {
				ya = false;
				break;
			}
			se.insert(num % 10);
			num /= 10;
		}
		if (ya) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	
	return 0;
}
