#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

ll max(ll a, ll b, ll c) {
	if (a > b && a > c)
		return a;
	if (b > c)
		return b;
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();

	vector<ll> v;
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pub(x);
	}
	ll dp[102][3];
	memset(dp, -1, sizeof(dp));
	if (v[0] == 0)
		dp[0][0] = 0;
	if (v[0] == 1 or v[0] == 3)
		dp[0][1] = 1;
	if (v[0] == 2 or v[0] == 3)
		dp[0][2] = 1;

	for (ll i = 1; i < n; i++) {
		dp[i][0] = max(dp[i-1][0],
						   dp[i-1][1],
						   dp[i-1][2]);
		if (v[i] == 1) {
			dp[i][1] = max(dp[i-1][0] + 1,
						   dp[i-1][1],
						   dp[i-1][2] + 1);
		}
		else if (v[i] == 2) {
			dp[i][2] = max(dp[i-1][0] + 1,
						   dp[i-1][1] + 1,
						   dp[i-1][2]);
		}
		else if (v[i] == 3) {
			dp[i][1] = max(dp[i-1][0] + 1,
						   dp[i-1][1],
						   dp[i-1][2] + 1);
			dp[i][2] = max(dp[i-1][0] + 1,
						   dp[i-1][1] + 1,
						   dp[i-1][2]);
		}
	}
	cout << n - max(dp[n-1][0],
				dp[n-1][1],
				dp[n-1][2]) << '\n';

	return 0;
}
