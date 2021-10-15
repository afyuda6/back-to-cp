#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<string> v;
	set<string> se;
	ll n, k;
	cin >> n >> k;
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.pb(s);
		se.insert(s);
	}
	map<char, int> m;
	ll res = 0;
	for (ll x = 0; x < n - 1; x++) {
		for (ll y = x + 1; y < n; y++) {
			string target = "";
			for (ll i = 0; i < k; i++) {
				m['S'] = 0;
				m['E'] = 0;
				m['T'] = 0;
				m[v[x][i]]++;
				m[v[y][i]]++;
				if (m['S'] == 2) {
					target += 'S';
				}
				else if (m['E'] == 2) {
					target += 'E';
				}
				else if (m['T'] == 2) {
					target += 'T';
				}
				else if (m['S'] == 0) {
					target += 'S';
				}
				else if (m['E'] == 0) {
					target += 'E';
				}
				else if (m['T'] == 0) {
					target += 'T';
				}
			}
			res += se.count(target);
			if (target == v[x])
				res--;
			if (target == v[y])
				res--;
		}
	}
	cout << res / 3 << '\n';
	
	return 0;
}
