#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, k;
	cin >> n >> k;
	vector<pii> a, res;
	for (ll i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		a.pb({x, i});
	}
	for (ll i = 0; i < k; i++) {
		ll maxi = INT_MIN;
		ll mini = INT_MAX;
		ll maxid = -1;
		ll minid = -1;
		for (ll j = 0; j < n; j++) {
			if (a[j].first > maxi) {
				maxi = a[j].first;
				maxid = a[j].second;
			}
		}
		for (ll j = 0; j < n; j++) {
			if (a[j].first < mini) {
				mini = a[j].first;
				minid = a[j].second;
			}
		}
		if (maxi == mini) {
			break;
		}
		a[maxid - 1].first--;
		a[minid - 1].first++;
		res.pb({maxid, minid});
	}
	if (res.size() == 0) {
		cout << "0 0\n";
	}
	else {
		sort(a.begin(), a.end());
		cout << a.back().first - a.front().first << ' ' << res.size() << '\n';
		for (auto x : res) {
			cout << x.first << ' ' << x.second << '\n';
		}
	}
	
	return 0;
}
