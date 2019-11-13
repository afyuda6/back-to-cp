#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();

	ll t;
	cin >> t;
	while (t--) {
        ll x, y;
        cin >> x >> y;
        if (x >= y) {
            cout << "YES\n";
        }
        else if (x == 2 && y == 3) {
            cout << "YES\n";
        }
        else if (x >= 4) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

	}

	return 0;
}
