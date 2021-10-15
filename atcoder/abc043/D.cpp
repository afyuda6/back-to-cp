#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	string s;
	cin >> s;
	for (ll i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i+1]) {
			cout << i + 1 << ' ' << i + 2;
			return 0;
		}
	}
	for (ll i = 0; i < s.length() - 2; i++) {
		if (s[i] == s[i+2]) {
			cout << i + 1 << ' ' << i + 3;
			return 0;
		}
	}
	cout << -1 << ' ' << -1;
	
	return 0;
}
