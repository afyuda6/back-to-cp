#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int,int> pii;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();

	ll n, sum = 0;
	cin >> n;
	vector<bool> v;
	ll cnt = 0;
	bool nol = false;
	for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        bool ya;
        if (abs(x + 1) < abs(x - 1))
            sum += abs(x + 1), ya = false;
        else if (abs(x + 1) > abs(x - 1))
            sum += abs(x - 1), ya = true;
        else
            sum++, nol = true;
        if (!ya)
            cnt++;
	}
	if (cnt % 2 && !nol)
        sum += 2;
    cout << sum << '\n';

 	return 0;
 }
