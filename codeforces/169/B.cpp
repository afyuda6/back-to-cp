#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string a, s;
    cin >> a >> s;
    ll num = a.length();
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    ll j = 0;
    for (ll i = 0; i < num; i++) {
		if (a[i] < s[j]) {
			cout << s[j];
			j++;
		}
		else {
			cout << a[i];
		}
	}
    
    return 0;
}
