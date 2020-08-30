#include <bits/stdc++.h>
#include <cmath>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll t;
    cin >> t;
    while (t--) {
        map<char, ll> m;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (ll j = 0; j < s.length(); j++) {
                m[s[j]]++;
            }
        }
        bool yes = true;
        for (char a = 'a'; a <= 'z'; a++) {
            if (m[a] % n != 0)
                yes = false;
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

 	return 0;
}
