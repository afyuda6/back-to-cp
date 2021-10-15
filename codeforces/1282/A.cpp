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
		ll a, b, c, r;
		cin >> a >> b >> c >> r;
		ll mi = min(a, b);
		ll ma = max(a, b);
		ll pi = c - r;
		ll pa = c + r;
		if (pi <= mi && pa >= ma) {
			cout << 0 << '\n';
		}
		else if (pi <= mi) {
			cout << ma - max(pa, mi) << '\n';
		}
		else if (pa >= ma) {
			cout << min(ma, pi) - mi << '\n';
		}
		else {
			cout << pi - mi + ma - pa << '\n';
		}
	}
	
	return 0;
}
