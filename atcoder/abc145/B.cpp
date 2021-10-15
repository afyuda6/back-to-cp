#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n;
	string s;
	cin >> n >> s;
	if (n % 2) {
		cout << "No";
	}
	else {
		for (ll i = 0; i < n/2; i++) {
			if (s[i] != s[n/2 + i]) {
				cout << "No";
				return 0;
			}
		}
		cout << "Yes\n";
	}
	
	return 0;
}
