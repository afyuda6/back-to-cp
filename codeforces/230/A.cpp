#include <bits/stdc++.h>
using namespace std;
int main() {
    int s,n,x[1001],y[1001],tmpx,tmpy;
    cin>>s>>n;
    for (int i=1;i<=n;i++) {
        cin>>x[i]>>y[i];
    }
    for (int i=1;i<=n;i++) {
        for (int j=n;j>i;j--) {
            if (x[j]<x[j-1]) {
                tmpx=x[j];
                x[j]=x[j-1];
                x[j-1]=tmpx;
                tmpy=y[j];
                y[j]=y[j-1];
                y[j-1]=tmpy;
            }
        }
    }
    for (int i=1;i<=n;i++) {
        if (s>x[i]) s+=y[i];
            else {
                cout<<"NO"<<endl;
                return 0;
            }
    }
    cout<<"YES"<<endl;
}
