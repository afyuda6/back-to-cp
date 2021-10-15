#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		deque<char> mp, mh;
		bool ya = false;
		string p, h;
		cin >> p >> h;
		for (ll i = 0; i < p.length(); i++) {
			mp.pb(p[i]);
		}
		for (ll i = 0; i < h.length(); i++) {
			if (i >= p.length()) {
				mh.pop_front();
			}
			mh.pb(h[i]);
			multiset<char> dp, dh;
			for (auto x : mp) {
				dp.insert(x);
			}
			for (auto y : mh) {
				dh.insert(y);
			}
			if (dp == dh) {
				ya = true;
				break;
			}
		}
		if (ya) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	
	return 0;
}
