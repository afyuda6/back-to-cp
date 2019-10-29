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

    vector<ll> a, b;
    ll res = 0;

    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.pb(x);
    }

    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++) {
        ll x;
        cin >> x;
        b.pb(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while (!a.empty() && !b.empty()) {
        if (abs(a.back() - b.back()) > 1) {
            if (a.back() > b.back())
                a.pop_back();
            else
                b.pop_back();
        }
        else {
            res++;
            a.pop_back();
            b.pop_back();
        }
    }

    cout << res << '\n';

    return 0;
}


