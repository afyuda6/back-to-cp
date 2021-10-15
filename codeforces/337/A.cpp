#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m, f[51],tmp,res=1001;
    cin>>n>>m;
    for (int i=0;i<m;i++) {
        cin>>f[i];
    }
    for (int i=0;i<m;i++) {
        for (int j=m-1;j>i;j--) {
            if (f[j]<f[j-1]) {
                tmp=f[j];
                f[j]=f[j-1];
                f[j-1]=tmp;
            }
        }
    }
    for (int i=0;i<=m-n;i++) {
        tmp=abs(f[i]-f[i+n-1]);
        if (tmp<res) res=tmp;
    }
    cout<<res<<endl;
}
