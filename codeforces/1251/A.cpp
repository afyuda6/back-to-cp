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

    ll t;
    cin >> t;
    while (t--) {
        vector<pair<char,int>> v;
        map<char, int> m;
        string s;
        cin >> s;
        char tmp = s[0];
        int cnt = 1;
        for (ll i = 1; i < s.length(); i++) {
            if (s[i] != tmp) {
                v.pb({tmp, cnt});
                cnt = 1;
            }
            else {
                cnt++;
            }
            tmp = s[i];
        }
        v.pb({tmp, cnt});
        for (auto x : v)
            if (x.second % 2)
                m[x.first] = 1;
        for (auto x : m)
            cout << x.first;
        cout << '\n';
    }

    return 0;
}
