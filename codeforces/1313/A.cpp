#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define MOD 1000000007
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
		ll a[3], res = 0;
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		reverse(a, a + 3);
		if (a[0] > 0) {
			res++;
			a[0]--;
		}
		if (a[1] > 0) {
			res++;
			a[1]--;
		}
		if (a[2] > 0) {
			res++;
			a[2]--;
		}
		if (a[0] > 0 and a[1] > 0) {
			res++;
			a[0]--;
			a[1]--;
		}
		if (a[0] > 0 and a[2] > 0) {
			res++;
			a[0]--;
			a[2]--;
		}
		if (a[1] > 0 and a[2] > 0) {
			res++;
			a[1]--;
			a[2]--;
		}
		if (a[0] > 0 and a[1] > 0 and a[2] > 0) {
			res++;
			a[0]--;
			a[1]--;
			a[2]--;
		}
		cout << res << '\n';
	}
    
    return 0;
}
