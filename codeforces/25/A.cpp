#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a[102],ev=0,od=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        if (a[i]%2==0) ev++;
        if (a[i]%2==1) od++;
    }
    for (int i=1;i<=n;i++) {
        if (ev>od && a[i]%2==1) {
            cout<<i;
        }
        if (ev<od && a[i]%2==0) {
            cout<<i;
        }
    }
    cout<<endl;
}
