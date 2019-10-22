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

    ll q;
    cin >> q;
    while (q--) {
        ll n;
        cin >> n;
        ll tmp = n;
        while (true) {
            bool ya = false;
            ll tmp2 = tmp;
            while (tmp2) {
                if (tmp2 % 3 == 2)
                    ya = true;
                tmp2 /= 3;
            }
            if (ya)
                tmp++;
            else
                break;
        }
        cout << tmp << '\n';
    }

    return 0;
}
