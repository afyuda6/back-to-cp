#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l,a[1001],tmp;
    float maxi=0;
    cin>>n>>l;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    for (int i=1;i<=n;i++) {
        for (int j=n;j>i;j--) {
            if (a[j]<a[j-1]) {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
        if ((a[i]-a[i-1])>maxi) maxi=a[i]-a[i-1];
    }
    if (a[1]==0) a[0]=a[1]-a[2];
    else a[0]=0-a[1];
    if ((a[1]-a[0])>maxi) maxi=a[1]-a[0];
    if (a[n]==l) a[n+1]=l+(a[n]-a[n-1]);
    else a[n+1]=l+(l-a[n]);
    if ((a[n+1]-a[n])>maxi) maxi=a[n+1]-a[n];
    cout<<setprecision(10)<<fixed;
    cout<<maxi/2<<endl;
}