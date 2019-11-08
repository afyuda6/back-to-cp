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
	
	ll kmin, kmax;
	ll n, m;
	
	cin >> n >> m;
	
	ll div = n / m;
	ll mod = n % m;
	
	kmin = mod * ((div + 1) * (div) / 2)
		 + (m - mod) * ((div) * (div - 1) / 2);
	
	kmax = (n - m + 1) * (n - m) / 2;
	
	cout << kmin << ' ' << kmax << '\n';
	
	return 0;
}
