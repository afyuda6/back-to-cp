#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,k,x=1,y=1,counter=0,x1,y1;
    cin>>n>>m>>k;
    if (k<n) {
        cout<<k+1<<' '<<y<<endl;
        return 0;
    }
    else if (k>=n) {
        k-=n;
        x1=k/(m-1);
        y1=k%(m-1);
        if (x1%2==0) {
            cout<<n-x1<<' '<<2+y1%(m-1)<<endl;
            return 0;
        }
        if (x1%2==1) {
            cout<<n-x1<<' '<<m-y1%(m-1)<<endl;
            return 0;
        }
    }
}
