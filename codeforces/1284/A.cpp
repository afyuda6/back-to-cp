#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<string> s, t;
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		string x;
		cin >> x;
		s.pb(x);
	}
	for (ll i = 0; i < m; i++) {
		string x;
		cin >> x;
		t.pb(x);
	}
	ll q;
	cin >> q;
	for (ll i = 0; i < q; i++) {
		ll y;
		cin >> y;
		if (y % n == 0) {
			cout << s[n - 1];
		}
		else {
			cout << s[y % n - 1];
		}
		if (y % m == 0) {
			cout << t[m - 1] << '\n';
		}
		else {
			cout << t[y % m - 1] << '\n';
		}
	}
	
	return 0;
}
