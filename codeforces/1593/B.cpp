#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    
    
    string tmp = s;
    ll cnt = 0;
    while (!tmp.empty() and tmp.back() != '5') {
      tmp.pop_back();
      cnt++;
    }
    if (!tmp.empty())
      tmp.pop_back();
    while (!tmp.empty() and tmp.back() != '2') {
      tmp.pop_back();
      cnt++;
    }
    ll res = min(LLONG_MAX, cnt);

    tmp = s;
    cnt = 0;
    while (!tmp.empty() and tmp.back() != '0') {
      tmp.pop_back();
      cnt++;
    }
    if (!tmp.empty())
      tmp.pop_back();
    while (!tmp.empty() and tmp.back() != '5') {
      tmp.pop_back();
      cnt++;
    }
    res = min(res, cnt);

    tmp = s;
    cnt = 0;
    while (!tmp.empty() and tmp.back() != '5') {
      tmp.pop_back();
      cnt++;
    }
    if (!tmp.empty())
      tmp.pop_back();
    while (!tmp.empty() and tmp.back() != '7') {
      tmp.pop_back();
      cnt++;
    }
    res = min(res, cnt);

    tmp = s;
    cnt = 0;
    while (!tmp.empty() and tmp.back() != '0') {
      tmp.pop_back();
      cnt++;
    }
    if (!tmp.empty())
      tmp.pop_back();
    while (!tmp.empty() and tmp.back() != '0') {
      tmp.pop_back();
      cnt++;
    }
    res = min(res, cnt);

    cout << res << '\n';
  }
}