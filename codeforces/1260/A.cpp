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
	for (int i = 0; i < n; i++) {
		ll res = 0;
		vector<ll> v;
		ll c, sum;
		cin >> c >> sum;
		ll divi = sum / c;
		ll modi = sum % c;
		for (ll j = 0; j < c; j++) {
			v.pb(divi);
		}
		for (ll j = 0; j < modi; j++) {
			v[j]++;
		}
		for (auto x : v) {
			res += x * x;
		}
		cout << res << '\n';
	}
	
	return 0;
}
