#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll q;
    cin >> q;
    while (q--) {
        ll p[200005];
        bool visited[200005] = {false};
        map<ll, vector<ll>> m;
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            p[i] = x;
        }
        for (ll i = 1; i <= n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                m[i].pb(i);
                ll tmp = p[i];
                while (tmp != i) {
                    visited[tmp] = true;
                    m[i].pb(tmp);
                    tmp = p[tmp];
                }
            }
        }
        for (auto x : m) {
            for (auto y : x.second) {
                p[y] = x.second.size();
            }
        }
        for (ll i = 1; i <= n; i++) {
            cout << p[i] << " \n"[i == n];
        }
    }

    return 0;
}
