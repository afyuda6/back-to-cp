#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, x, y;
		cin >> a >> b >> x >> y;
		ll res1 = a * (b - y - 1);
		ll res2 = a * y;
		ll res3 = b * (a - x - 1);
		ll res4 = b * x;
		cout << max(max(res1, res2), max(res3, res4)) << '\n';
	}
	
	return 0;
}
