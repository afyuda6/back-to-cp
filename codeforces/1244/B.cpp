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
        ll n; cin >> n;
        string room; cin >> room;
        ll l = -1, r = n;
        for (ll j = 0; j < n; j++) {
            if (room[j] == '1') {
                l = j;
                break;
            }
        }
        for (ll j = n-1; j >= 0; j--) {
            if (room[j] == '1') {
                r = j;
                break;
            }
        }
        if (l == -1 && r == n)
            cout << n << '\n';
        else
            cout << max((r + 1)*2, (n - l)*2) << '\n';
    }

    return 0;
}
