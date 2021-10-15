#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll a, b, c;
    cin >> a >> b >> c;
    ll pembagi = min(a / 3, min(b / 2, c / 2));
    a -= 3 * pembagi;
    b -= 2 * pembagi;
    c -= 2 * pembagi;
    ll res = 0;
    for (ll i = 0; i < 7; i++) {
        ll start = i;
        ll ta = a;
        ll tb = b;
        ll tc = c;
        ll cnt = 0;
        while (true) {
            if (start == 0 || start == 3 || start == 6) {
                if (ta == 0)
                    break;
                ta--;
            }
            else if (start == 1 || start == 5) {
                if (tb == 0)
                    break;
                tb--;
            }
            else {
                if (tc == 0)
                    break;
                tc--;
            }
            start = (start + 1) % 7;
            cnt++;
        }
        res = max(res, cnt);
    }
    cout << 7 * pembagi + res << '\n';

 	return 0;
}
