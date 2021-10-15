#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF (ll)1LL<<32

using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll mul[1000000];
    ll l;
    cin >> l;
    ll res = 0, idx = 0;
    bool ya = true;
    mul[0] = 1;
    for (ll i = 0; i < l; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "for") {
            ll n;
            cin >> n;
            idx++;
            mul[idx] = min(mul[idx - 1], INF) * n;
        }
        else if (cmd == "end") {
            idx--;
        }
        else if (cmd == "add") {
            res += mul[idx];
        }
        if (res >= INF) {
            ya = false;
        }
    }
    if (ya)
        cout << res << '\n';
    else
        cout << "OVERFLOW!!!\n";

 	return 0;
}
