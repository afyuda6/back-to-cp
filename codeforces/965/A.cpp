#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,n,s,p,res;
    cin>>k>>n>>s>>p;
    if (n%s==0 && (k*(n/s))%p==0) res=k*(n/s)/p;
    else if (n%s==0 && (k*(n/s))%p!=0) res=k*(n/s)/p+1;
    else if (n%s!=0 && (k*(n/s+1))%p==0) res=k*(n/s+1)/p;
    else if (n%s!=0 && (k*(n/s+1))%p!=0) res=k*(n/s+1)/p+1;
    cout<<res<<endl;
}
