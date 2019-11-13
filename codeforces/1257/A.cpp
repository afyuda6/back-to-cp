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

	ll t;
	cin >> t;
	while (t--) {
        ll n, x, a, b;
        cin >> n >> x >> a >> b;
        cout << min(n - 1, abs(a-b) + x) << '\n';
	}

	return 0;
}
