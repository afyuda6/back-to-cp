#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll n, m;
	cin >> n >> m;
	ll mini = min(n, m);
	cout << mini + 1 << '\n';
	for (ll i = mini; i >= 0; i--) {
		cout << i << ' ' << mini - i << '\n';
	}
	
	return 0;
}
