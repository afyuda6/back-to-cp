#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,num,has=0;
    cin>>n>>num;
    int maxi=num;
    int mini=num;
    for (int i=2;i<=n;i++) {
        cin>>num;
        if (num>maxi) {
            maxi=num;
            has++;
        }
        if (num<mini) {
            mini=num;
            has++;
        }
    }
    cout<<has<<endl;
}
