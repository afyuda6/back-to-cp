#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	map<int, ll> dupl;
	vector<ll> f;
	vector<ll> a;
	set<ll> res, hari;
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	ll tmp = 0;
	for (ll i = 0; i < n; i++) {
		if (a[i] > 0) {
			if (!res.count(a[i]) && !hari.count(a[i])) {
				res.insert(a[i]);
				hari.insert(a[i]);
				dupl[a[i]]++;
			}
			else if (!res.count(a[i]) && hari.count(a[i])) {
				cout << -1 << '\n';
				return 0;
			}
			else {
				cout << -1 << '\n';
				return 0;
			}
		}
		else if (a[i] < 0) {
			if (res.count(-a[i])) {
				res.erase(-a[i]);
			}
			else {
				cout << -1 << '\n';
				return 0;
			}
		}
		if (res.size() == 0) {
			f.pb(i + 1 - tmp);
			tmp = i + 1;
			hari.clear();
		}
	}
	if (res.size() != 0) {
		cout << -1 << '\n';
		return 0;
	}
	for (auto x : dupl) {
		if (x.second > f.size()) {
			cout << -1 << '\n';
			return 0;
		}
	}
	cout << f.size() << '\n';
	for (auto x : f) {
		cout << x << ' ';
	}
	
	return 0;
}
