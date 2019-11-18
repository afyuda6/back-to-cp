#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> a;
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	sort(a.begin(), a.end());
	vector<ll> pref(n, 0);
	for (ll i = 0; i < n; i++) {
		if (i == 0)
			pref[i] = a[i];
		else
			pref[i] += pref[i-1] + a[i];
	}
	for (ll i = 0; i < n; i++) {
		if (i >= m)
			pref[i] += pref[i - m];
	}
	for (auto x : pref) {
		cout << x << ' ';
	}
	
	return 0;
}
