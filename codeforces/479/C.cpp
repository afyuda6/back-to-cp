#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	cin >> n;
	vector<pii> v;
	for (ll i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		v.pb({x, y});
	}
	sort(v.begin(), v.end());
	ll res = -1;
	for (auto x : v) {
		if (res <= x.second)
			res = x.second;
		else
			res = x.first;
	}
	cout << res << '\n';
	
	return 0;
}
