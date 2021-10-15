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
	cout << fixed << setprecision(6);
	double res = 0;
	for (ll i = 1; i <= n; i++) {
		res += 1.0 / i;
	}
	cout << res << '\n';
	
	
	return 0;
}
