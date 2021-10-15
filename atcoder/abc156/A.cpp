#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, r;
	cin >> n >> r;
	if (n < 10)
		cout << r + 100 * (10 - n) << '\n';
	else
		cout << r << '\n';
	
	return 0;
}
