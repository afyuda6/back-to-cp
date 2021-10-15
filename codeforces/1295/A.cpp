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
		if (n % 2) {
			cout << 7;
			for (ll i = 0; i < n / 2 - 1; i++) {
				cout << 1;
			}
			cout << '\n';
		}
		else {
			for (ll i = 0; i < n / 2; i++) {
				cout << 1;
			}
			cout << '\n';
		}
	}
	
	return 0;
}
