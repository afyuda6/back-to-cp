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
		ll h, m;
		cin >> h >> m;
		ll mi = 60 * h + m;
		cout << 24 * 60 - mi << '\n';
	}
	
	return 0;
}
