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
		ll n, k;
		cin >> n >> k;
		ll mod = n % k;
		if (mod > k / 2) {
			cout << n - (mod - k / 2) << '\n';
		}
		else {
			cout << n << '\n';
		}
	}
	
	return 0;
}
