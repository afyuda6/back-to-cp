#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ll n, xx = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0) {
            cout << x / 2 << '\n';
        }
        else {
            cout << (x + xx) / 2 << '\n';
            xx *= -1;
        }
    }
    return 0;
}
