#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, m;
	cin >> n >> m;
	
	ll mini = ceil (n * 1.0 / 2);
	ll maxi = n;
	
	for (ll i = mini; i <= maxi; i++) {
		if (i % m == 0) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	
	return 0;
}
