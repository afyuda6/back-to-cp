#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0, r = 0;
    for (ll i = 0; i < n; i++) {
		if (s[i] == '(') l++;
		else r++;
	}
    if (n % 2 or l != r) {
		cout << -1 << '\n';
		return 0;
	}
	ll curr = 0;
	ll tmp = -1;
	ll res = 0;
    for (ll i = 0; i < n; i++) {
		if (s[i] == ')') {
			curr--;
			if (curr == 0) {
				tmp = i;
			}
		}
		else {
			curr++;
			if (curr == 0) {
				res += (i - tmp);
				tmp = i;
			}
		}
	}
	cout << res << '\n';
	
    return 0;
}
