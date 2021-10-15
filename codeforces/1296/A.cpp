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
		ll n;
		cin >> n;
		ll sum = 0;
		bool odd = false, even = false;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x % 2)
				odd = true;
			else
				even = true;
			sum += x;
		}
		if (sum % 2 or even and odd) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	
	
	return 0;
}
