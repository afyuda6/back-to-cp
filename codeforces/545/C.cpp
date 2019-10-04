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

    vector<pii> v;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x, h;
        cin >> x >> h;
        v.pb(mp(x, h));
    }

    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }

    ll cnt = 2;
    for (int i = 1; i < n - 1; i++) {
        if (v[i].fst - v[i].snd > v[i-1].fst) {
            cnt++;
        }
        else if (v[i].fst + v[i].snd < v[i+1].fst) {
            v[i].fst += v[i].snd;
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
