#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, k, x, y;
	cin >> n >> k >> x >> y;
	cout << x * min(n, k) + y * max(0LL, n - k);
	
	return 0;
}
