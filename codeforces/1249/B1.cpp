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
        ll p[1000];
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            p[i] = x;
        }
        for (ll i = 1; i <= n; i++) {
            ll cnt = 1;
            ll tmp = p[i];
            while (tmp != i) {
                tmp = p[tmp];
                cnt++;
            }
            cout << cnt << " \n"[i == n];
        }
    }

    return 0;
}
