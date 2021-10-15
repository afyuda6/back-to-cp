#include <bits/stdc++.h>
using namespace std;
int main() {
    int cek=0;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++) {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9') cek=1;
    }
    if (cek) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
