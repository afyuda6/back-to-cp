#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

vector<int> adj[100005];
map<int,int> m;
int visited[100005] = {false};
string comb[] = {"123", "132", "213", "231", "312", "321"};

void dfs(int s) {
    visited[s] = true;
    for (int i = 0; i < adj[s].size(); i++) {
        if (!visited[adj[s][i]]) {
            m[s] = adj[s][i];
            dfs(adj[s][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    ll c[4][100005] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[1][i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[2][i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[3][i];
    }
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
        if (adj[u].size() > 2) {
            cout << -1 << '\n';
            return 0;
        }
        if (adj[v].size() > 2) {
            cout << -1 << '\n';
            return 0;
        }
    }
    int start;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() == 1) {
            start = i;
            break;
        }
    }
    dfs(start);
    ll ans = LLONG_MAX;
    int tmp = start;
    vector<int> vans;
    for (int i = 0; i < 6; i++) {
    	start = tmp;
    	vector<int> v(n+1);
    	ll res = 0;
    	for (int j = 1; j <= n; j++) {
        	res += c[comb[i][j%3] - '0'][start];
        	v[start] = comb[i][j%3] - '0';
        	start = m[start];
    	}
    	if (res < ans) {
    		ans = res;
    		vans = v;
    	}
    }
    cout << ans << '\n';
    for (auto x : vans) {
    	if (x == 0)
    		continue;
    	cout << x << ' ';
    }

    return 0;
}
