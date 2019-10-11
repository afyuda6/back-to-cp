#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

map<char, set<int>> m;
string s;
int q;
int t;
int pos; char c;
int cnt;
int l, r;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]].insert(i + 1);
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> t;
        if (t == 1) {
            cin >> pos >> c;
            m[s[pos-1]].erase(pos);
            s[pos-1] = c;
            m[c].insert(pos);
        }
        else {
            cnt = 0;
            cin >> l >> r;
            for (char chr = 'a'; chr <= 'z'; chr++) {
                auto lp = m[chr].lower_bound(l);
                if (lp != m[chr].end() && *lp <= r) {
                    cnt++;
                }
            }
            cout << cnt << '\n';
        }
    }

    return 0;
}
