#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
  
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll q;
	cin >> q;
	while (q--) {
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll cnt = 0;
		for (ll i = 0; i < n; i++) {
			if (s[i] == '1')
				cnt++;
			else if (cnt <= k)
				swap(s[i], s[i-cnt]), k -= cnt;
			else
				swap(s[i], s[i-k]), k = 0;
		}
		cout << s << '\n';
	}
	
 	return 0;
 }
