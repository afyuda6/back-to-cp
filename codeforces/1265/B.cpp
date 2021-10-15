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
		set<ll> s;
		ll pos[200005];
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			ll x;
			cin >> x;
			pos[x] = i;
		}
		for (ll i = 1; i <= n; i++) {
			s.insert(pos[i]);
			bool ya = true;
			if (*(--s.end()) - *s.begin() != i - 1)
				ya = false;
			if (ya)
				cout << 1;
			else
				cout << 0;
		}
		cout << '\n';
	}
	
 	return 0;
}
