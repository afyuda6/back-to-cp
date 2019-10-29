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

    ll n;
    cin >> n;
    while (n--) {
        ll num;
        cin >> num;
        if (360 % (180 - num) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
