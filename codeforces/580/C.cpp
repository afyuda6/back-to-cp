#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

ll n, m, ans = 0;
vector<ll> a(100005);
vector<ll> adj[100005];
queue<ll> q;
ll dist[100005];
ll res[100005];


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();

	memset(dist, -1, sizeof dist);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
        cin >> a[i];
	}
	for (ll i = 0; i < n - 1; i++) {
        ll x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
	}
	q.push(1);
    dist[1] = a[1];
    res[1] = a[1];
    while (!q.empty()) {
        ll f = q.front();
        q.pop();
        if (adj[f].size() == 1 && f != 1) {
            if (res[f] <= m) {
                ans++;
            }
        }
        for (ll i = 0; i < adj[f].size(); i++) {
            if (dist[adj[f][i]] == -1) {
                q.push(adj[f][i]);
                if (a[adj[f][i]] == 1)
                    dist[adj[f][i]] = dist[f] + 1;
                else
                    dist[adj[f][i]] = 0;
                res[adj[f][i]] = max(res[f], dist[adj[f][i]]);
            }
        }
    }
    cout << ans << '\n';

 	return 0;
 }
