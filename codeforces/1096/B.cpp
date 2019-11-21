#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 998244353

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll l = 1;
	for (ll i = 1; i < n; i++) {
		if (s[i] == s[0])
			l++;
		else
			break;
	}
	ll r = 1;
	for (ll i = n - 2; i >= 0; i--) {
		if (s[i] == s[n - 1])
			r++;
		else
			break;
	}
	ll res;
	if (s[0] == s[n - 1]) {
		l++, r++;
		res = (l % MOD * r % MOD) % MOD;
	}
	else {
		res = 1;
		res = (res % MOD + (l % MOD + r % MOD) % MOD) % MOD;
	}
	cout << res << '\n';
	
	return 0;
}
