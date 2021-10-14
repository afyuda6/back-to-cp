#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 0; i < k; i++) {
      ll a;
      cin >> a;
      v.push_back(a);
    }
    
    sort(v.begin(), v.end(), greater<ll>());

    ll cat = 0;
    ll i = 0;
    while (i < k and cat < n) {
      if (cat >= v[i])
        break;
      cat += (n - v[i]);
      i++;
    }

    cout << i << '\n';
  }
}