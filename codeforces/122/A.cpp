#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,cek=0;
    cin>>n;
    if (n%4==0) cek=1;
    if (n%7==0) cek=1;
    if (n%47==0) cek=1;
    if (n%74==0) cek=1;
    if (n%444==0) cek=1;
    if (n%447==0) cek=1;
    if (n%474==0) cek=1;
    if (n%477==0) cek=1;
    if (n%744==0) cek=1;
    if (n%747==0) cek=1;
    if (n%774==0) cek=1;
    if (n%777==0) cek=1;
    if (cek) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
