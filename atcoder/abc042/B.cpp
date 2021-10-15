#include <bits/stdc++.h>
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();
  
  vector<string> v;
  ll n, l;
  cin >> n >> l;
  for (ll i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.pb(s);
  }
  sort(v.begin(), v.end());
  
  for (auto x : v) {
    cout << x;
  }
  
  return 0;
}
