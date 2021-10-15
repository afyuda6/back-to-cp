#include <bits/stdc++.h>
using namespace std;
int main() {
    int cek=0;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++) {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            if (i!=0 && cek==0) {
                cout<<" ";
                cek=1;
            }
            i+=2;
        }
        else {
            cout<<s[i];
            cek=0;
        }
    }
    cout<<endl;
}
