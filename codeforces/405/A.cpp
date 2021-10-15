#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a[102],tmp;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        for (int j=n-1;j>i;j--) {
            if (a[j]<a[j-1]) {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
        if (i!=(n-1)) cout<<a[i]<<" ";
        else cout<<a[i]<<endl;
    }
}
