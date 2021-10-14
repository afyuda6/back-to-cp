#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> v;
    ll mini = INT_MAX;
    for (ll i = 0; i < n; i++) {
      ll a;
      cin >> a;
      v.push_back(a);
      mini = min(mini, a);
    }
    for (ll i = 0; i < n; i++) {
      v[i] -= mini;
    }

    sort(v.begin(), v.end(), greater<ll>());

    while (!v.empty() and v.back() == 0) {
      v.pop_back();
    }
    ll res = -1;
    for (ll i = 0; i < v.size(); i++) {
      if (i == 0)
        res = v[i];
      else
        res = __gcd(res, v[i]);
    }
    cout << res << '\n';
  }
}