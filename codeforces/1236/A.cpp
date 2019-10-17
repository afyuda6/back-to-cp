#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll res1 = 3*min(a, b/2) + 3*min(b - 2*min(a, b/2), c/2);
        ll res2 = 3*min(b, c/2) + 3*min(a, (b - min(b, c/2))/2);
        ll res = max(res1, res2);
        cout << res << '\n';
    }

    return 0;
}
