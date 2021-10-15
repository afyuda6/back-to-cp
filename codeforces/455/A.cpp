#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,a,b[100005]={0},tmp,c=0,d=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a;
        b[a]++;
    }
    for (int i=1;i<=100000;i++) {
        tmp=max(c,d+b[i]*i);
        d=c;
        c=tmp;
    }
    cout<<max(c,d)<<endl;
}
