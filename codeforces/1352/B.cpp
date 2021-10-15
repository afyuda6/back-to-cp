#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		vector<ll> v;
		bool res = true;
		ll n, k;
		cin >> n >> k;
		for (ll i = 0; i < k; i++) {
			v.pb(n / k);
		}
		if (k % 2) {
			v[0] += n % k;
			if ((n % k) % 2) {
				for (ll i = 1; i < k; i++) {
					if (i % 2)
						v[i]--;
					else
						v[i]++;
				}
			}
		}
		else {
			v[0] += n % k;
			if ((n % k) % 2) {
				res = false;
			}
		}
		for (ll i = 0; i < k; i++) {
			if (v[i] <= 0)
				res = false;
		}
		if (res) {
			cout << "YES\n";
			for (auto x : v) {
				cout << x << ' ';
			}
			cout << '\n';
		}
		else
			cout << "NO\n";
	}
	
	return 0;
}
