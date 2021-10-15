#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	set<char> alpha;
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (ll i = 0; i < k; i++) {
		char chr;
		cin >> chr;
		alpha.insert(chr);
	}
	set<string> us;
	ll cnt = 0;
	string t = "";
	for (ll i = 0; i < s.length(); i++) {
		if (!alpha.count(s[i])) {
			t = "";
			continue;
		}
		else {
			t += s[i];
			cnt += t.length();
		}
	}
	cout << cnt << '\n';
	return 0;
}
