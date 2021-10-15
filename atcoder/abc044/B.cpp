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
	
	map<char, ll> m;
	string s;
	cin >> s;
	for (ll i = 0; i < s.length(); i++) {
		m[s[i]]++;
	}
	for (char chr = 'a'; chr <= 'z'; chr++) {
		if (m[chr] % 2) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	
	return 0;
}
