#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
		ll a, b;
		cin >> a >> b;
		if (__gcd(a, b) != 1)
			cout << "Infinite\n";
		else
			cout << "Finite\n";
	}
    
    return 0;
}
