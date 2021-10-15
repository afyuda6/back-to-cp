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
	
	ll f[6];
	cin >> f[0] >> f[1];
	for (ll i = 2; i < 6; i++) {
		f[i] = ((f[i - 1] % MOD - f[i - 2] % MOD + MOD) % MOD);
	}
	ll n;
	cin >> n;
	n--;
	cout << (f[n % 6] + MOD) % MOD << '\n';
	
	return 0;
}
