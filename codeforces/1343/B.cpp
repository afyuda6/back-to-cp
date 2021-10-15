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
		ll n;
		cin >> n;
		if ((n / 2) % 2)
			cout << "NO\n";
		else {
			cout << "YES\n";
			for (ll i = 1; i <= n / 2; i++) {
				cout << i * 2 << ' ';
			}
			for (ll i = 1; i <= n / 4; i++) {
				cout << i * 2 - 1 << ' ';
			}
			for (ll i = n / 4 + 1; i <= n / 2; i++) {
				cout << i * 2 + 1 << ' ';
			}
			cout << '\n';
		}
	}
	
	return 0;
}
