#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll n, b, a;
    cin >> n >> b >> a;
    ll cap = a;
    ll res = n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (a == 0 && b == 0) {
            res = i;
            break;
        }
        if (x == 0) {
            if (a > 0)
                a--;
            else if (b > 0)
                b--;
        }
        else {
            if (a == cap) {
                a = max(0LL, a - 1);
            }
            else if (b > 0) {
                b = max(0LL, b - 1);
                a = min(cap, a + 1);
            }
            else if (a > 0)
                a = max(0LL, a - 1);
        }
    }
    cout << res << '\n';

 	return 0;
}
