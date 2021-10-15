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
		ll n;
		cin >> n;
		s.insert(0);
		for (ll i = 1; i <= sqrt(n); i++) {
			s.insert(i);
			s.insert(n / i);
		}
		cout << s.size() << '\n';
		for (auto x : s) {
			cout << x << ' ';
		}
		cout << '\n';
    }
 
 	return 0;
}
