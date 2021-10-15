#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,a,counter=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a;
        counter+=a;
    }
    cout<<setprecision(12)<<fixed;
    cout<<counter/n<<endl;
}
