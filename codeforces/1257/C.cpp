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
        vector<ll> v[200005];
        set<ll> s;
        ll res = 200005;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s.insert(x);
            v[x].pub(i);
        }
        for (auto x : s) {
            for (ll i = 1; i < v[x].size(); i++) {
                res = min(res, v[x][i] - v[x][i-1] + 1);
            }
        }
        if (res == 200005)
            cout << -1 << '\n';
        else
            cout << res << '\n';
	}

	return 0;
}
