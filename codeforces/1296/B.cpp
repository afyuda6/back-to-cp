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
		ll s, res = 0;
		cin >> s;
		while (s) {
			ll take;
			if (s >= 10)
				take = s / 10 * 10;
			else
				take = s;
			ll caba;
			if (s >= 10)
				caba = s / 10;
			else
				caba = 0;
			s += caba - take;
			res += take;
		}
		cout << res << '\n';
	}
	
	
	return 0;
}
