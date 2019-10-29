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

    ll x[1005];
    ll n, m, k, res = 0;
    cin >> n >> m >> k;
    for (ll i = 1; i <= m; i++) {
        cin >> x[i];
    }
    cin >> x[m+1];
    for (ll i = 1; i <= m; i++) {
        ll en = x[i];
        ll fe = x[m+1];
        ll cnt = 0;
        while (en || fe) {
            if ((en&1) != (fe&1))
                cnt++;
            en >>= 1;
            fe >>= 1;
        }
        if (cnt <= k)
            res++;
    }
    cout << res << '\n';

    return 0;
}


