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
        bool ya = true;
        vector<ll> v, res;
        set<ll> s;
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            v.pb(x);
            s.insert(i);
        }
        for (ll i = 0; i < n; i++) {
            if (s.count(v[i])) {
                res.pb(v[i]);
                s.erase(v[i]);
            }
            else {
                if (*s.begin() < v[i]) {
                    res.pb(*s.begin());
                    s.erase(*s.begin());
                }
                else {
                    ya = false;
                }
            }
        }
        if (ya) {
            for (auto x : res) {
                cout << x << ' ';
            }
        }
        else {
            cout << -1 << '\n';
        }
    }

 	return 0;
}
