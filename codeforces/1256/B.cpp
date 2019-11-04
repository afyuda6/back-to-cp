#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll q;
	cin >> q;
	while (q--) {
		vector<ll> v(150);
		ll n;
		cin >> n;
		bool op[n+1];
		for (ll i = 1; i <= n; i++) {
			cin >> v[i];
		}
		
			memset(op, false, sizeof(op));
		for (ll i = 1; i <= n; i++) {
			ll pos_i = 0;
			for (ll j = 1; j <= n; j++) {
				if (v[j] == i) {
					pos_i = j;
					break;
				}
			}
			while (pos_i > i && v[pos_i] < v[pos_i - 1] && !op[pos_i]) {
				ll tmp = v[pos_i];
				v[pos_i] = v[pos_i - 1];
				v[pos_i - 1] = tmp;
				op[pos_i] = true;
				pos_i--;
			}
		}
		for (ll i = 1; i <= n; i++) {
			cout << v[i] << " \n"[i == n];
		}
	}
	
	return 0;
}
