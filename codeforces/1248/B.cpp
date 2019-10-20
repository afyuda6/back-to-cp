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

    vector<ll> v, a, b;
    ll n, res1 = 0, res2 = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n/2; i++) {
        a.push_back(v[i]);
    }
    for (ll i = n/2; i < n; i++) {
        b.push_back(v[i]);
    }
    for (ll i = 0; i < a.size(); i++) {
        res1 += a[i];
    }
    for (ll i = 0; i < b.size(); i++) {
        res2 += b[i];
    }
    cout << res1*res1 + res2*res2 << '\n';

    return 0;
}
