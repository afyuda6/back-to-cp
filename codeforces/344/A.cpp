#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c,counter=1,tmp;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>c;
        if (c!=tmp && i!=1) counter++;
        tmp=c;
    }
    cout<<counter<<endl;
}
