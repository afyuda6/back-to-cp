#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

char tambahsatu(char a) {
	if (a != '9')
		return a++;
	else
		return '0';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll t;
	cin >> t;
	while (t--) {
		ll res = 0;
		vector<string> v;
		set<string> s, s2;
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			string x;
			cin >> x;
			v.pb(x);
			s2.insert(x);
		}
		for (ll i = 0; i < n; i++) {
			if (!s.count(v[i])) {
				s.insert(v[i]);
			}
			else {
				res++;
				string tmp_utama = v[i];
				string tmp1 = tmp_utama;
				string tmp2 = tmp_utama;
				string tmp3 = tmp_utama;
				string tmp4 = tmp_utama;
				
				bool ya = false;
				
				ll idx = 0;
				while (s2.count(tmp1) && !ya) {
					if (tmp1[0] != '9')
						tmp1[0]++;
					else
						tmp1[0] = '0';
					if (!s2.count(tmp1)) {
						v[i] = tmp1;
						ya = true;
						break;
					}
					if (idx == 10) {
						break;
					}
					idx++;
				}
				
				idx = 0;
				while (s2.count(tmp2) && !ya) {
					if (tmp2[1] != '9')
						tmp2[1]++;
					else
						tmp2[1] = '0';
					if (!s2.count(tmp2)) {
						v[i] = tmp2;
						ya = true;
						break;
					}
					if (idx == 10) {
						break;
					}
					idx++;
				}
				
				idx = 0;
				while (s2.count(tmp3) && !ya) {
					if (tmp3[2] != '9')
						tmp3[2]++;
					else
						tmp3[2] = '0';
					if (!s2.count(tmp3)) {
						v[i] = tmp3;
						ya = true;
						break;
					}
					if (idx == 10) {
						break;
					}
					idx++;
				}
				
				idx = 0;
				while (s2.count(tmp4) && !ya) {
					if (tmp4[3] != '9')
						tmp4[3]++;
					else
						tmp4[3] = '0';
					if (!s2.count(tmp4)) {
						v[i] = tmp4;
						ya = true;
						break;
					}
					if (idx == 10) {
						break;
					}
					idx++;
				}
				
				s.insert(v[i]);
s2.insert(v[i]);
			}
		}
		cout << res << '\n';
		for (ll i = 0; i < n; i++) {
			cout << v[i] << '\n';
		}
	}
	
	return 0;
}