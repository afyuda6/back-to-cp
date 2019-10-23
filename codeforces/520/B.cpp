#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

ll n, m;
queue<ll> q;
ll dist[100000];

void bfs() {
    q.push(n);
    while (!q.empty()) {
        int v = q.front();
        if (v == m)
            break;
        q.pop();
        if (dist[v * 2] == -1 && v * 2 <= 10000) {
            dist[v * 2] = dist[v] + 1;
            q.push(v * 2);
        }
        if (dist[v - 1] == -1) {
            dist[v - 1] = dist[v] + 1;
            q.push(v - 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    memset(dist, -1, sizeof(dist));
    cin >> n >> m;
    dist[n] = 0;
    bfs();
    cout << dist[m] << '\n';

    return 0;
}
