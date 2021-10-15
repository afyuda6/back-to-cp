#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		set<ll> se;
		ll n, s, k;
		cin >> n >> s >> k;
		for (ll i = 0; i < k; i++) {
			ll x;
			cin >> x;
			se.insert(x);
		}
		ll temp1 = s, temp2 = s;
		while (se.count(temp1)) {
			temp1++;
		}
		while (se.count(temp2)) {
			temp2--;
		}
		if (temp1 > n) {
			cout << s - temp2 << '\n';
		}
		else if (temp2 < 1) {
			cout << temp1 - s << '\n';
		}
		else {
			cout << min(temp1 - s, s - temp2) << '\n';
		}
	}
	
	return 0;
}
