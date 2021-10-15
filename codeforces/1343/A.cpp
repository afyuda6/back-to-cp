#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> v;
	
	ll ans = 0;
	double res = 1;
	while (ans <= 1000000000) {
		ans += res;
		v.pb(ans);
		res *= 2;
	}
	
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		for (ll i = 1; i < v.size() - 1; i++) {
			if (n % v[i] == 0) {
				cout << n / v[i] << '\n';
				break;
			}
		}
			
	}
	
	return 0;
}
