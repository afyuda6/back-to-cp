#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string fst, snd;
        cin >> fst >> snd;
        for (int i = 0; i < n; i++) {
            if (fst[i] == '1' || fst[i] == '2')
                fst[i] = '1';
            else
                fst[i] = '0';
            if (snd[i] == '1' || snd[i] == '2')
                snd[i] = '1';
            else
                snd[i] = '0';
        }
        bool res = false;
        bool cek = false;
        for (int i = 0; i < n; i++) {
			if (res == false) {
				if (fst[i] == '0') {
					if (snd[i] == '1') {
						cout << "NO\n";
						cek = true;
						break;
					}
					else if (snd[i] == '0') {
						res = true;
					}
				}
			}
			else if (res == true) {
				if (snd[i] == '0') {
					if (fst[i] == '1') {
						cout << "NO\n";
						cek = true;
						break;
					}
					else if (fst[i] == '0') {
						res = false;
					}
				}
			}
        }
        if (cek)
			continue;
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}
