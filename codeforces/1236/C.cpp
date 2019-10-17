#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

ll comb(ll x, ll y) {
    ll a = 1;
    for (ll i = x; i > y; i--) {
        a *= i;
    }
    ll b = 1;
    for (ll i = y; i > 0; i--) {
        b *= i;
    }
    return a / b;
}

ll po(ll n) {
    ll res = 1;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    return res - 1;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v[500];
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i%2)
                v[i].pb(n*i + j + 1);
            else
                v[i].pb(n*(i+1) - j);
        }
    }
    //for (int i = 0; i < n; i++) {
        //if (i % 2 == 0)
            //reverse(v[i].begin(), v[i].end());
    //}
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
