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
	vector<pair<string, ll>> v;
	vector<string> longest;
	for (ll i = 0; i + 2 < 2 * n; i++) {
		string s;
		cin >> s;
		v.pb({s, i});
		if ((int)s.length() == n - 1)
			longest.pb(s);
	}
	sort(v.begin(), v.end());
	bool satu = true;
	string tebakan1 = longest[0].substr(0, n - 1) + longest[1].substr(n - 2, 1);
	string tebakan2 = longest[1].substr(0, n - 1) + longest[0].substr(n - 2, 1);
	for (ll i = 1; i < (int)tebakan1.length(); i++)
		if (tebakan1[i] != tebakan2[i - 1])
			satu = false;
	vector<char> res(2 * n - 2, 'S'), ans(2 * n - 2, 'S');
	ll len = 1;
	for (ll i = 0; i + 2 < 2 * n; i++)
		if ((int)v[i].first.length() == len) {
			bool ya = true;
			for (ll j = 0; j < (int)v[i].first.length(); j++)
				if (v[i].first[j] != tebakan1[j]) {
					ya = false;
					break;
				}
			if (ya)
				res[v[i].second] = 'P', len++;
		}
	ll lon = 1;
	for (ll i = 0; i + 2 < 2 * n; i++)
		if ((int)v[i].first.length() == lon) {
			bool ya = true;
			for (ll j = 0; j < (int)v[i].first.length(); j++)
				if (v[i].first[j] != tebakan2[j]) {
					ya = false;
					break;
				}
			if (ya)
				ans[v[i].second] = 'P', lon++;
		}
	if (satu) {
		if (len == n) {
			for (auto x : res)
				cout << x;
		}
		else if (lon == n) {
			for (auto x : ans)
				cout << x;
		}
	}
	else {
		if (lon == n) {
			for (auto x : ans)
				cout << x;
		}
		else if (len == n) {
			for (auto x : res)
				cout << x;
		}
	}
	
	return 0;
}
