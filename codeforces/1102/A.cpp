#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	ll x;
	cin >> x;
	x++;
	x /= 2;
	if (x % 2)
		cout << "1\n";
	else
		cout << "0\n";
	
	return 0;
}
