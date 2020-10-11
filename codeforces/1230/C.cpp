#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pii> adj;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj.pb(mp(u,v));
    }

    if (n <= 6) {
        cout << m << '\n';
    }
    else {
        int res = 0;
        for (int i = 1; i <= 6; i++) {
            for (int j = i+1; j <= 7; j++) {
                map<int,int> p;
                set<pii> s;
                int cnt = 2;
                for (int ii = 1; ii <= 7; ii++) {
                    if (ii == i || ii == j)
                        p[ii] = 1;
                    else {
                        p[ii] = cnt;
                        cnt++;
                    }
                }
                for (auto x : adj) {
                    s.insert(mp(min(p[x.first],p[x.second]),max(p[x.first],p[x.second])));
                }
                res = max((int)s.size(),res);
            }
        }
        cout << res << "\n";
    }

    return 0;
}
