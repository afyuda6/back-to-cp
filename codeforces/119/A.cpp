#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,n,cek=0;
    cin>>a>>b>>n;
    while (n>0) {
        if (cek==0) {
            n-=__gcd(a,n);
            cek=1;
        }
        else if (cek==1) {
            n-=__gcd(b,n);
            cek=0;
        }
    }
    if (cek==1) cout<<0<<endl;
    if (cek==0) cout<<1<<endl;
}
