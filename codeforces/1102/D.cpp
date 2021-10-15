#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	map<ll, ll> f;
	ll n;
	cin >> n;
	string s;
	cin >> s;
	for (ll i = 0; i < n; i++) {
		f[s[i] - '0']++;
	}
	if (f[0] > n / 3 and f[1] > n / 3) {
		ll otot = f[1] - n / 3;
		for (ll i = n - 1; i >= 0; i--) {
			if (otot) {
				if (s[i] == '1') {
					s[i] = '2';
					otot--;
				}
			}
		}
		ll ztot = f[0] - n / 3;
		for (ll i = n - 1; i >= 0; i--) {
			if (ztot) {
				if (s[i] == '0') {
					s[i] = '2';
					ztot--;
				}
			}
		}
	}
	else if (f[0] > n / 3 and f[2] > n / 3) {
		ll ztoo = f[0] - n / 3;
		for (ll i = n - 1; i >= 0; i--) {
			if (ztoo) {
				if (s[i] == '0') {
					s[i] = '1';
					ztoo--;
				}
			}
		}
		ll ttoo = f[2] - n / 3;
		for (ll i = 0; i < n; i++) {
			if (ttoo) {
				if (s[i] == '2') {
					s[i] = '1';
					ttoo--;
				}
			}
		}
	}
	else if (f[1] > n / 3 and f[2] > n / 3) {
		ll otoz = f[1] - n / 3;
		for (ll i = 0; i < n; i++) {
			if (otoz) {
				if (s[i] == '1') {
					s[i] = '0';
					otoz--;
				}
			}
		}
		ll ttoz = f[2] - n / 3;
		for (ll i = 0; i < n; i++) {
			if (ttoz) {
				if (s[i] == '2') {
					s[i] = '0';
					ttoz--;
				}
			}
		}
	}
	else if (f[0] <= n / 3 and f[1] <= n / 3) {
		ll ztot = n / 3 - f[0];
		for (ll i = 0; i < n; i++) {
			if (ztot) {
				if (s[i] == '2') {
					s[i] = '0';
					ztot--;
				}
			}
		}
		ll otot = n / 3 - f[1];
		for (ll i = 0; i < n; i++) {
			if (otot) {
				if (s[i] == '2') {
					s[i] = '1';
					otot--;
				}
			}
		}
	}
	else if (f[0] <= n / 3 and f[2] <= n / 3) {
		ll ztoo = n / 3 - f[0];
		for (ll i = 0; i < n; i++) {
			if (ztoo) {
				if (s[i] == '1') {
					s[i] = '0';
					ztoo--;
				}
			}
		}
		ll ttoo = n / 3 - f[2];
		for (ll i = n - 1; i >= 0; i--) {
			if (ttoo) {
				if (s[i] == '1') {
					s[i] = '2';
					ttoo--;
				}
			}
		}
	}
	else if (f[1] <= n / 3 and f[2] <= n / 3) {
		ll otoz = n / 3 - f[2];
		for (ll i = n - 1; i >= 0; i--) {
			if (otoz) {
				if (s[i] == '0') {
					s[i] = '2';
					otoz--;
				}
			}
		}
		ll ttoz = n / 3 - f[1];
		for (ll i = n - 1; i >= 0; i--) {
			if (ttoz) {
				if (s[i] == '0') {
					s[i] = '1';
					ttoz--;
				}
			}
		}
	}
	cout << s << '\n';
	
	return 0;
}
