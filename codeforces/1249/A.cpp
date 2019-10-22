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
        vector<ll> a;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a.pb(x);
        }
        sort(a.begin(), a.end());
        ll cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i+1] - 1) {
                cnt = 2;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
