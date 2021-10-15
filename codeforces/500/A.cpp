#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t,cek=0,a[30001];
    cin>>n>>t;
    for (int i=1;i<n;i++) {
        cin>>a[i];
    }
    for (int i=1;i<n;i++) {
        if ((i+a[i])==t) {
            cek=1;
            break;
        }
        i=i+a[i]-1;
    }
    if (cek) cout<<"YES"<<endl;
    if (!cek) cout<<"NO"<<endl;
}
