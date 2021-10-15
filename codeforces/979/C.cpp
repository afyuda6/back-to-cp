#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

ll n, x, y, total;
vector<bool> visited(300005, false);
vector<ll> adj[300005];
vector<ll> v;
vector<ll> route;
ll fl = 0, be = 0;

void dfs(ll a, ll b) {
	visited[a] = true;
	v.pb(a);
	for (auto x : adj[a]) {
		if (!visited[x])
			dfs(x, b);
	}
	if (a == b) {
		route = v;
	}
	visited[a] = false;
	v.pop_back();
}

void clean() {
	for (auto x : route) {
		visited[x] = true;
	}
}

void bfs(ll w) {
	queue<ll> q;
	q.push(w);
	visited[w] = true;
	if (w == x)
		fl++;
	if (w == y)
		be++;
	while (!q.empty()) {
		ll fr = q.front();
		q.pop();
		for (auto v : adj[fr]) {
			if (!visited[v]) {
				q.push(v);
				visited[v] = true;
				if (w == x)
					fl++;
				if (w == y)
					be++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	cin >> n >> x >> y;
	total = n * (n - 1);
	for (ll i = 0; i < n - 1; i++) {
		ll u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(x, y);
	clean();
	bfs(x);
	bfs(y);
	cout << total - fl * be << '\n';
	
	return 0;
}
