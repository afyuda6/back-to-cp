#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();
  multiset<ll> ms;
  ll a, b, c;
  cin >> a >> b >> c;
  ms.insert(a);
  ms.insert(b);
  ms.insert(c);
  if (ms.count(5) == 2 && ms.count(7) == 1)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
