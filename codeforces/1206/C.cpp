#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll n;
    cin >> n;
    if (n % 2) {
        vector<ll> v;
        cout << "YES\n";
        for (ll i = 1; i <= 2*n; i += 2) {
            v.pb(i);
        }
        for (ll i = 2; i <= 2*n; i += 2) {
            v.pb(i);
        }
        for (ll i = 0; i < v.size()/2; i++) {
            if (i % 2) {
                swap(v[i], v[v.size()/2 + i]);
            }
        }
        for (auto x : v)
            cout << x << ' ';
    }
    else {
        cout << "NO\n";
    }

 	return 0;
}
