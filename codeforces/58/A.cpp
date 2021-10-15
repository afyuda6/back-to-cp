#include <bits/stdc++.h>
using namespace std;
int main() {
    int cek=0;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++) {
        if (cek==4 && s[i]=='o') cek=5;
        if (cek==3 && s[i]=='l') cek=4;
        if (cek==2 && s[i]=='l') cek=3;
        if (cek==1 && s[i]=='e') cek=2;
        if (cek==0 && s[i]=='h') cek=1;
    }
    if (cek==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
