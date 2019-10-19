#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<int, int> m;
    int arr[200005];
    vector<int> res;
    ll n;
    cin >> n;
    ll maks = -1;
    ll idx = -1;
    ll val = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]] = max(1, m[arr[i] - 1] + 1);
        //cout << m[arr[i]] << ' ';
    }
    //cout << '\n';
    for (int i = 0; i < n; i++) {
        if (m[arr[i]] >= maks) {
            maks = m[arr[i]];
            idx = i;
            val = arr[i];
        }
    }
    for (int i = idx; i >= 0; i--) {
        if (arr[i] == val) {
            res.pb(i);
            val--;
        }
    }
    cout << res.size() << '\n';
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] + 1 << ' ';
    }
    return 0;
}
