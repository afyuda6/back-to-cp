#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		if (arr[0] == arr[1] && arr[1] == arr[2]) {
			cout << 0 << '\n';
		}
		else if (arr[0] == arr[1]) {
			if (arr[2] == arr[0] + 1)
				cout << 0 << '\n';
			else
				cout << 2 * (arr[2] - arr[0] - 2) << '\n';
		}
		else if (arr[1] == arr[2]) {
			if (arr[0] == arr[2] - 1)
				cout << 0 << '\n';
			else
				cout << 2 * (arr[2] - arr[0] - 2) << '\n';
		}
		else {
			arr[0]++;
			arr[2]--;
			cout << 2 * arr[2] - 2 * arr[0] << '\n';
		}
	}
	
 	return 0;
}
