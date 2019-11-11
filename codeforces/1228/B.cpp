#include <bits/stdc++.h>
#define MOD 1000000007
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

ll r[1006];
ll c[1006];
ll arr[1006][1006];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	memset(r, 0, sizeof r);
	memset(c, 0, sizeof c);
	memset(arr, 0, sizeof arr);
	
	ll h, w, res = 1;
	cin >> h >> w;
	for (ll i = 1; i <= h; i++) {
		cin >> r[i];
		if (r[i] == 0) {
			if (arr[i][1] == 1) {
				cout << 0 << '\n';
				return 0;
			}
			arr[i][1] = -1;
		}
		else {
			for (ll j = 1; j <= r[i]; j++) {
				if (arr[i][j] == -1) {
					cout << 0 << '\n';
					return 0;
				}
				arr[i][j] = 1;
			}
			if (arr[i][r[i] + 1] == 1) {
				cout << 0 << '\n';
				return 0;
			}
			arr[i][r[i] + 1] = -1;
		}
	}
	for (ll j = 1; j <= w; j++) {
		cin >> c[j];
		if (c[j] == 0) {
			if (arr[1][j] == 1) {
				cout << 0 << '\n';
				return 0;
			}
			arr[1][j] = -1;
		}
		else {
			for (ll i = 1; i <= c[j]; i++) {
				if (arr[i][j] == -1) {
					cout << 0 << '\n';
					return 0;
				}
				arr[i][j] = 1;
			}
			if (arr[c[j] + 1][j] == 1) {
				cout << 0 << '\n';
				return 0;
			}
			arr[c[j] + 1][j] = -1;
		}
	}
	for (ll i = 1; i <= h; i++) {
		for (ll j = 1; j <= w; j++) {
			if (arr[i][j] == 0)
				res = ((res % MOD) * 2) % MOD;
		}
	}
	cout << res << '\n';
	
	return 0;
}
