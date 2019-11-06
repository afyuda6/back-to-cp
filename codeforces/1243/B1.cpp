#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll k;
	cin >> k;
	while (k--) {
		vector<pair<char,char>> v;
		ll n, cnt = 0;
		cin >> n;
		string s, t;
		cin >> s >> t;
		for (ll i = 0; i < n; i++) {
			if (s[i] != t[i]) {
				cnt++;
				v.pb({s[i], t[i]});
			}
		}
		if (cnt != 2) {
			cout << "No\n";
		}
		else {
			if (v[0] == v[1])
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	
	return 0;
}
