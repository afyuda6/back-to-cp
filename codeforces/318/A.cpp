#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,k;
    cin>>n>>k;
    if ((n/2)>=k && n%2==0) cout<<2*k-1<<endl;
    if ((n/2)<k && n%2==0) cout<<2*(k-(n/2))<<endl;
    if ((n/2+1)>=k && n%2==1) cout<<2*k-1<<endl;
    if ((n/2+1)<k && n%2==1) cout<<2*(k-(n/2+1))<<endl;
}
