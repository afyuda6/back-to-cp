#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int m,n,a;
    cin>>m>>n>>a;
    if (m%a==0 && n%a==0) cout<<(m/a)*(n/a)<<endl;
    else if (m%a==0) cout<<(m/a)*(n/a+1)<<endl;
    else if (n%a==0) cout<<(m/a+1)*(n/a)<<endl;
    else cout<<(m/a+1)*(n/a+1)<<endl;
}
