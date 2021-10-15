#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,h[102],a[102],counter=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>h[i]>>a[i];
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (h[i]==a[j]) counter++;
        }
    }
    cout<<counter<<endl;
}
