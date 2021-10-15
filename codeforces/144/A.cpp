#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a[102],ma=0,mi=100,x,y;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        if (a[i]<=mi) {
            mi=a[i];
            x=i;
        }
        if (a[i]>ma) {
            ma=a[i];
            y=i;
        }
    }
    //cout<<x<<" "<<y<<endl;
    if (x>y) cout<<(n-x)+(y-1)<<endl;
    if (y>x) cout<<(n-x)+(y-1)-1<<endl;
}
