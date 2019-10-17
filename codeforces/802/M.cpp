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

    vector<int> v;
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    int res = 0;
    for (int i = 0; i < k; i++) {
        res += v[i];
    }
    cout << res << '\n';

    return 0;
}
