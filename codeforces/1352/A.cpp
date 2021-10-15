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
		vector<string> v;
		string s;
		cin >> s;
		for (ll i = 0; i < s.length(); i++) {
			string tmp = "";
			if (s[i] != '0') {
				tmp += s[i];
				for (ll j = 0; j < s.length() - i - 1; j++) {
					tmp += '0';
				}
				v.pb(tmp);
			}
		}
		cout << v.size() << '\n';
		for (auto x : v) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
