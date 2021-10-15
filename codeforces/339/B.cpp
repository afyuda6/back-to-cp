#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,a[100000],counter=0;
    cin>>n>>m;
    a[0]=1;
    for (int i=1;i<=m;i++) {
        cin>>a[i];
        if (a[i]>a[i-1]) counter+=a[i]-a[i-1];
        else if (a[i]==a[i-1]) counter+=0;
        else if (a[i]<a[i-1]) counter+=(n-a[i-1])+a[i];
    }
    cout<<counter<<endl;
}
