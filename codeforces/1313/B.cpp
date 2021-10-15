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
		ll n, x, y;
		cin >> n >> x >> y;
		cout << min(n, max(0LL, x + y - n) + 1) << ' ';
		cout << min(n, x + y - 1) << '\n';
	}
	return 0;
}
