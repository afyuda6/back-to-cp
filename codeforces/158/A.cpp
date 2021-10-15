#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,a,counter=0,value=-1;
    cin>>n>>k;
    for (int i=1;i<=n;i++) {
        cin>>a;
        if (i==1 && a==0) {
            counter=0;
            break;
        }
        if (i==k) value=a;
        if (a<value) break;
        if (a==0) counter+=0;
        if (a!=0) counter++;
    }
    cout<<counter<<endl;
}
