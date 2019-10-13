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

    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        if (ceil(a*1.0/c) + ceil(b*1.0/d) > k)
            cout << -1 << '\n';
        else
            cout << ceil(a*1.0/c) << ' ' << ceil(b*1.0/d) << '\n';
    }

    return 0;
}
