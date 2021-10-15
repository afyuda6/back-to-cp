#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll mini = INT_MAX;
        ll maxi = INT_MIN;
        for (ll i = 0; i < n; i++) {
            ll x, y;
            cin >> x >> y;
            mini = min(mini, y);
            maxi = max(maxi, x);
        }
        cout << max(0LL, maxi - mini) << '\n';
    }

 	return 0;
}
