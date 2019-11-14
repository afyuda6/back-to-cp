#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
  
using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	vector<ll> AB, BA;
	string s;
	cin >> s;
	for (ll i = 1; i < s.length(); i++) {
		if (s[i-1] == 'A' && s[i] == 'B') {
			AB.pb(i-1);
		}
		if (s[i-1] == 'B' && s[i] == 'A') {
			BA.pb(i-1);
		}
	}
	for (ll i = 0; i < AB.size(); i++) {
		for (ll j = 0; j < BA.size(); j++) {
			if (abs(AB[i] - BA[j]) > 1) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
	
 	return 0;
 }
