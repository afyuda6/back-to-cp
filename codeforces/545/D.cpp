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
	vector<ll> a;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	sort(a.begin(), a.end());
	ll q = 0;
	ll res = 0;
	for (ll i = 0; i < n; i++) {
		if (q <= a[i]) {
			q += a[i];
			res++;
		}
	}
	cout << res << '\n';
	
	return 0;
}
