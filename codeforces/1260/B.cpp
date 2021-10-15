#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		ll x = min(a, b);
		ll y = max(a, b);
		if (x * 2 < y) {
			cout << "NO\n";
		}
		else if ((x + y) % 3 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	
	return 0;
}
