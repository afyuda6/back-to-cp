#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p[102],q[102];
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>p[i];
        q[p[i]]=i;
    }
    for (int i=1;i<=n;i++) {
        if (i!=n) cout<<q[i]<<" ";
        else cout<<q[i];
    }
    cout<<endl;
}
