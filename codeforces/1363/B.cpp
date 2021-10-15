#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll nol = 0, one = 0;
		string s;
		cin >> s;
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == '0')
				nol++;
			else
				one++;
		}
		ll res = min(nol, one);
		for (ll i = 0; i < s.length() - 1; i++) {
			ll l = i;
			ll r = i + 1;
			ll oleft = 0, nright = 0;
			while (l >= 0) {
				if (s[l] == '0')
					oleft++;
				l--;
			}
			while (r < s.length()) {
				if (s[r] == '1')
					nright++;
				r++;
			}
			ll onenol = oleft + nright;
			res = min(res, onenol);
			
			l = i;
			r = i + 1;
			ll nleft = 0, oright = 0;
			while (l >= 0) {
				if (s[l] == '1')
					nleft++;
				l--;
			}
			while (r < s.length()) {
				if (s[r] == '0')
					oright++;
				r++;
			}
			ll nolone = nleft + oright;
			res = min(res, nolone);
		}
		cout << res << '\n';
	}
	
	return 0;
}
