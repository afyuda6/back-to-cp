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
		ll res = 0;
		ll a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[2] - a[1] < a[0]) {
			res += a[2] - a[1];
			a[0] -= a[2] - a[1];
			a[2] = a[1];
		}
		if (a[1] == a[2]) {
			res += a[0];
			a[1] -= a[0] / 2;
			a[2] -= a[0] - a[0] / 2;
			res += min(a[1], a[2]);
			cout << res << '\n';
		}
		else {
			res += a[0];
			a[2] -= a[0];
			res += min(a[1], a[2]);
			cout << res << '\n';
		}
	}
	
	return 0;
}
