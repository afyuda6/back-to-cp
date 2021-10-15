#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	
	unordered_set<ll> s[10];
	vector<ll> bil[10];
	for (ll i = 0; i <= 9; i++) {
		ll num = i;
		while (!s[i].count(num%10)) {
			s[i].insert(num%10);
			bil[i].pb(num%10);
			num += i;
		}
	}
	
	vector<ll> pref[10];
	for (ll i = 0; i <= 9; i++) {
		ll p = 0;
		for (auto x : bil[i]) {
			p += x;
			pref[i].pb(p);
		}
	}
	
	ll q;
	cin >> q;
	while (q--) {
		ll n, m;
		cin >> n >> m;
		ll coba = n / m;
		ll divi = coba / s[m % 10].size();
		ll modi = coba % s[m % 10].size();
		ll res = divi * pref[m % 10].back();
		if (modi)
			res += pref[m % 10][modi - 1];
		cout << res << '\n';
	}
	
	return 0;
}




//3692581470
//3692581470
//3692581470
//369
