#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		ll res = abs(a - b);
		if (res % 5 >= 3) {
			res /= 5;
			cout << res + 2 << '\n';
		}
		else if (res % 5 >= 1){
			res /= 5;
			cout << res + 1 << '\n';
		}
		else {
			res /= 5;
			cout << res << '\n';
		}
	}
	
	return 0;
}
