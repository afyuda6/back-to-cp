#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c0=0,c1=0;
    char s[102];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>s[i];
        if (s[i]=='0') c0++;
        if (s[i]=='1') c1++;
    }
    if (c1==0) {
        cout<<'0'<<endl;
        return 0;
    }
    cout<<'1';
    for (int i=0;i<c0;i++) {
        cout<<'0';
    }
    cout<<endl;
}
