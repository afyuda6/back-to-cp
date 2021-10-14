#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll maks = max(a, max(b, c));
    cout << max(0LL, max(b - a + 1, c - a + 1)) << ' ';
    cout << max(0LL, max(a - b + 1, c - b + 1)) << ' ';
    cout << max(0LL, max(a - c + 1, b - c + 1)) << '\n';
  }
}