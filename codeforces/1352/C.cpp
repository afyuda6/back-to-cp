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
		ll n, k;
		cin >> n >> k;
		ll div = k / (n - 1);
		ll mod = k % (n - 1);
		if (mod == 0)
			cout << n * div - 1 << '\n';
		else
			cout << n * div + mod << '\n';
	}
	
	return 0;
}

