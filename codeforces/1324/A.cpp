#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		bool odd = false;
		bool even = false;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x % 2)
				odd = true;
			else
				even = true;
		}
		if (odd and even)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	
	return 0;
}
