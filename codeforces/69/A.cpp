#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,d,a=0,b=0,c=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<3;j++) {
            cin>>d;
            if (j==0) a+=d;
            if (j==1) b+=d;
            if (j==2) c+=d;
        }
    }
    if (a==0 && b==0 && c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
