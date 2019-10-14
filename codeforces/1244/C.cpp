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

    ll n, p, w, d;
    cin >> n >> p >> w >> d;
    if (n * w < p) {
        cout << -1 << '\n';
        return 0;
    }
    for (ll i = 0; i <= w; i++) {
        if (i > (n-p/w)/(1-d/w))
            break;
        if (i + (p - i * d) / w <= n && (p - i * d) % w == 0 && (p - i * d) / w >= 0) {
            cout << (p - i * d) / w << ' ' << i
                << ' ' << n - i - (p - i * d) / w << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}
