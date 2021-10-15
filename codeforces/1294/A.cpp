#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll arr[3], n;
		cin >> arr[0] >> arr[1] >> arr[2] >> n;
		sort(arr, arr + 3);
		if ((arr[0] + arr[1] + arr[2] + n) % 3)
			cout << "NO\n";
		else {
			if (2 * arr[2] - arr[1] - arr[0] > n)
				cout << "NO\n";
			else
				cout << "YES\n";
		}
	}
	
	return 0;
}
