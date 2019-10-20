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

    ll T;
    cin >> T;
    while (T--) {
        vector<ll> p;
        ll n, eM = 0, eN = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                eN++;
        }
        ll oN = n - eN;
        vector<ll> q;
        ll m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                eM++;
        }
        ll oM = m - eM;
        cout << eM * eN + oM * oN << '\n';
    }
        return 0;
}
