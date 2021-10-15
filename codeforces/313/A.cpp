#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n>=0) cout<<n<<endl;
    else {
        if ((n/10%10)<(n%10)) cout<<n/10-n/10%10+n%10;
        else cout<<n/10<<endl;

    }
}
