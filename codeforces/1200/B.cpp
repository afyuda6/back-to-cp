#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll n, bag, k;
		vector<ll> s;
		cin >> n >> bag >> k;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			s.pb(x);
		}
		for (ll i = 0; i < n - 1; i++) {
			if (s[i] >= s[i + 1]) {
				bag += min(s[i], s[i] - s[i + 1] + k);
				s[i] += min(s[i], s[i] - s[i + 1] + k);
			}
			else if (s[i] < s[i + 1]) {
				if (s[i + 1] - s[i] <= k) {
					bag += min(s[i], s[i] - s[i + 1] + k);
					s[i] += min(s[i], s[i] - s[i + 1] + k);
				}
				else {
					if (s[i + 1] - s[i] - k > bag) {
						cout << "NO\n";
						goto bawah;
					}
					else {
						bag -= s[i + 1] - s[i] - k;
						s[i] += s[i + 1] - s[i] - k;
					}
				}
			}
		}
		cout << "YES\n";
		bawah:;
	}
	
	return 0;
}
