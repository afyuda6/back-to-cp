#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

ll fact(ll n) {
	if (n <= 1)
		return 1;
	return n * fact(n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	string s1, s2;
	cin >> s1 >> s2;
	
	ll n = s1.length();
	
	ll qm = 0;
	ll t1 = 0, t2 = 0;
	for (ll i = 0; i < n; i++) {
		if (s1[i] == '+')
			t1++;
		if (s2[i] == '+')
			t2++;
		if (s2[i] == '?')
			qm++;
	}
	
	ll k1 = n - t1, k2 = n - t2 - qm;
	
	if (k2 > k1 || t2 > t1) {
		printf("%.9lf\n", 0.0);
		return 0;
	}
	
	double num = fact(qm) / fact(t1 - t2) / fact(k1 - k2);
	double denom = pow(2, qm);
	
	printf("%.9lf\n", num / denom);
	
	return 0;
}
