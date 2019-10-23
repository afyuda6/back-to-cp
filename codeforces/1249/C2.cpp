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

    vector<ll> v;
    vector<ll> p(40);
    for (ll i = 0; i <= 38; i++) {
        v.pb((ll)pow(3, i));
        (i == 0) ? p[i] = v[i] : p[i] = v[i] + p[i - 1];
    }

    ll q;
    cin >> q;
    while (q--) {
        ll n;
        cin >> n;
        auto itr = lower_bound(p.begin(), p.end(), n);
        ll tmp = p[itr - p.begin()];
        for (ll i = v.size() - 1; i >= 0; i--) {
            if (tmp - v[i] >= n) {
                tmp -= v[i];
            }
        }
        cout << tmp << '\n';
    }

    return 0;
}
