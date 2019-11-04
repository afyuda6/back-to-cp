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
		ll a, b, n, s;
		cin >> a >> b >> n >> s;
		ll batas = min(s / n * n, a * n);
		if (batas + b >= s or b >= s)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	return 0;
}
