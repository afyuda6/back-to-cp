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
	ll e = 0, o = 0;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (x % 2) e++;
		else o++;
	}
	cout << min(e, o) << '\n';
	
	return 0;
}
