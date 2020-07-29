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
		ll l, r;
		cin >> l >> r;
		if (2 * l <= r) {
			cout << l << ' ' << 2 * l << '\n';
		}
		else if (l <= r / 2) {
			cout << r / 2 << ' ' << r << '\n';
		}
		else {
			cout << "-1 -1\n";
		}
	}
	
	return 0;
}
