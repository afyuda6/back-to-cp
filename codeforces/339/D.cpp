#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

ll n, m;
ll A[(1<<17)];
ll tree[4 * (1<<17)];

void build(int node, int start, int end) {
    if(start == end) {
        tree[node] = A[start];
    }
    else {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        //cout << "node = " << node << '\n';
        //cout << "tree[2 * node] = " << tree[2 * node] << '\n';
        //cout << "tree[2 * node + 1] = " << tree[2 * node + 1] << '\n';
        if ((int)log2(node) % 2 != n % 2)
            tree[node] = tree[2*node] | tree[2*node+1];
        else
            tree[node] = tree[2*node] ^ tree[2*node+1];
        //cout << "tree[node] = " << tree[node] << '\n';
    }
}

void update(int node, int start, int end, int idx, int val) {
    if(start == end) {
        A[idx] = val;
        tree[node] = val;
    }
    else {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            update(2*node, start, mid, idx, val);
        }
        else {
            update(2*node+1, mid+1, end, idx, val);
        }
        //cout << "node = " << node << '\n';
        //cout << "tree[2 * node] = " << tree[2 * node] << '\n';
        //cout << "tree[2 * node + 1] = " << tree[2 * node + 1] << '\n';
        if ((int)log2(node) % 2 != n % 2)
            tree[node] = tree[2*node] | tree[2*node+1];
        else
            tree[node] = tree[2*node] ^ tree[2*node+1];
        //cout << "tree[node] = " << tree[node] << '\n';
    }
}

int query(int node, int start, int end, int l, int r) {
    if(r < start or end < l) {
        return 0;
    }
    if(l <= start and end <= r) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    if ((int)log2(node) % 2 != n % 2)
        return (p1 | p2);
    else
        return (p1 ^ p2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    cin >> n >> m;
    for (ll i = 0; i < (1 << n); i++) {
        cin >> A[i];
    }
    build(1, 0, (1 << n) - 1);
    for (ll i = 0; i < m; i++) {
        ll p, b;
        cin >> p >> b;
        update(1, 0, (1 << n) - 1, p - 1, b);
        cout << tree[1] << '\n';
    }

 	return 0;
}
