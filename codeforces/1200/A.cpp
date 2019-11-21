#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	cin >> n;
	string s;
	cin >> s;
	vector<ll> room(10, 0);
	for (ll i = 0; i < s.length(); i++) {
		if (s[i] == 'L') {
			for (ll j = 0; j < 10; j++) {
				if (room[j] == 0) {
					room[j] = 1;
					break;
				}
			}
		}
		else if (s[i] == 'R') {
			for (ll j = 9; j >= 0; j--) {
				if (room[j] == 0) {
					room[j] = 1;
					break;
				}
			}
		}
		else {
			room[s[i] - '0'] = 0;
		}
	}
	for (auto x : room)
		cout << x;
	
	return 0;
}
