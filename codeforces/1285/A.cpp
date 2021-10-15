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
	string s;
	cin >> s;
	ll l = 0, r = 0;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'L')
			l++;
		else if (s[i] == 'R')
			r++;
	}
	cout << l + r + 1 << '\n';
	
	return 0;
}
