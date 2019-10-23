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

    vector<ll> a, b;
    ll n, c, res = 0;
    cin >> n >> c;
    ll dp[n+1][2] = {0};
    for (ll i = 0; i < n-1; i++) {
        ll x;
        cin >> x;
        a.pb(x);
    }
    for (ll i = 0; i < n-1; i++) {
        ll x;
        cin >> x;
        b.pb(x);
    }
    dp[0][0] = 0;
    for (ll i = 1; i < n; i++) {
        dp[i][0] = min(dp[i-1][0], dp[i-1][1]) + a[i-1];
        dp[i][1] = min(dp[i-1][0], max(0LL, dp[i-1][1] - c)) + b[i-1] + c;
    }
    for (ll i = 0; i < n; i++) {
        cout << min(dp[i][1], dp[i][0]) << " \n"[i == n-1];
    }

    return 0;
}
