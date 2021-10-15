#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,div=0;
    cin>>n>>m;
    int k=n;
    while (n>=m) {
        div+=(n/m);
        n=(n/m)+(n%m);
    }
    cout<<k+div<<endl;
}
