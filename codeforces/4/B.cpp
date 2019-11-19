#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll d, sumTime;
	cin >> d >> sumTime;
	vector<ll> x(d), y(d);
	ll mini = 0;
	ll maxi = 0;
	for (ll i = 0; i < d; i++) {
		cin >> x[i] >> y[i];
		mini += x[i];
		maxi += y[i];
	}
	if (sumTime < mini || sumTime > maxi) {
		cout << "NO\n";
	}
	else {
		vector<ll> res(d);
		for (ll i = 0; i < d; i++) {
			res[i] = x[i];
		}
		ll idx = 0;
		while (mini != sumTime) {
			if (mini + (y[idx] - x[idx]) <= sumTime) {
				res[idx] = y[idx];
				mini += (y[idx] - x[idx]);
			}
			else if (mini /*4*/ + (y[idx] - x[idx]) /*2*/ > sumTime /*5*/) {
				res[idx] = x[idx] + sumTime - mini;
				mini = sumTime;
			}
			idx++;
		}
		cout << "YES\n";
		for (auto x : res) {
			cout << x << ' ';
		}
	}
	
	
	return 0;
}
