#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    vector<ll> id;
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        id.push_back(x);
    }
    deque<int> dq;
    set<int> s;
    for (ll i = 0; i < n; i++) {
		if (!s.count(id[i])) {
			s.insert(id[i]);
			dq.push_front(id[i]);
		}
        if (dq.size() == k + 1) {
			int last = dq.back();
			dq.pop_back();
			s.erase(last);
		}
    }
    int dqs = dq.size();
    cout << dqs << '\n';
    for (auto x : dq) {
		cout << x << ' ';
	}
 
    return 0;
}
