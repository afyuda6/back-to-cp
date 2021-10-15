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
		ll n, x, odd = 0, even = 0;
		cin >> n >> x;
		for (ll i = 0; i < n; i++) {
			ll y;
			cin >> y;
			if (y % 2)
				odd++;
			else
				even++;
		}
		if (n == x) {
			if (odd % 2)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else if (x % 2) {
			if (odd)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else {
			if (odd and even)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		
	}
	
	return 0;
}
