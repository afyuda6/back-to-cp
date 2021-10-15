#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b,c;
    cin>>a>>b>>c;
    int cek=0;
    for (int i=0;i<c.length();i++) {
        for (int j=0;j<a.length();j++) {
            if (a[j]==c[i]) {
                c[i]='0';
                a[j]='0';
                break;
            }
        }
    }
    for (int i=0;i<c.length();i++) {
        for (int j=0;j<b.length();j++) {
            if (b[j]==c[i]) {
                c[i]='0';
                b[j]='0';
                break;
            }
        }
    }
    for (int i=0;i<c.length();i++) {
        if (c[i]!='0') {
            cek=1;
            break;
        }
    }
    for (int i=0;i<b.length();i++) {
        if (b[i]!='0') {
            cek=1;
            break;
        }
    }
    for (int i=0;i<a.length();i++) {
        if (a[i]!='0') {
            cek=1;
            break;
        }
    }
    if (cek) cout<<"NO"<<endl;
    if (!cek) cout<<"YES"<<endl;
}
