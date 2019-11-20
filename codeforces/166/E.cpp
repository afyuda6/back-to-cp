#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	cin >> n;
	if (n == 1) {
		cout << 0 << '\n';
	}
	else if (n == 2) {
		cout << 3 << '\n';
	}
	else {
		ll f = 0;
		ll s = 3;
		ll t;
		for (ll i = 3; i <= n; i++) {
			t = ((2 % MOD * s % MOD) % MOD + (3 % MOD * f % MOD) % MOD) % MOD;
			f = s;
			s = t;
		}
		cout << t << '\n';
	}
	
	return 0;
}
