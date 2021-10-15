#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
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
		if (arr[2] - (arr[1] + arr[0]) > 1)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	
	return 0;
}
