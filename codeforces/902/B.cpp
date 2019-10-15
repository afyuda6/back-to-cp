#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int n;
int p[100005];
int c[100005];
ll res = 0;

void bfs(int u, int color) {
    queue<pii> q;
    q.push({u,color});
    while (!q.empty()) {
        int v = q.front().fst;
        if (c[v] != q.front().snd) {
            res++;
        }
        q.pop();
        p[v] = -1;
        color = c[v];
        for (int i = 2; i <= n; i++) {
            if (p[i] == v && p[i] != -1) {
                q.push({i,color});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 2; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    bfs(1,-1);
    cout << res << '\n';

    return 0;
}
