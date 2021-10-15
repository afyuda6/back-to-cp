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
		ll n, m, k;
		cin >> n >> m >> k;
		if (m <= n / k) {
			cout << m << '\n';
		}
		else {
			m -= n / k;
			cout << (n / k) - ((m - 1) / (k - 1) + 1) << '\n';
		}
	}
	
	return 0;
}
