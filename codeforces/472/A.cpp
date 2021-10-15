#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    if (n%2==1) {
        x=9;
        cout<<x<<" "<<n-x<<endl;
    }
    if (n%2==0) {
        x=4;
        cout<<x<<" "<<n-x<<endl;
    }
}
