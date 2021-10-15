#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, k, res = 0;
	cin >> n >> k;
	while (n) {
		res++;
		n /= k;
	}
	cout << res << '\n';
	
	return 0;
}
