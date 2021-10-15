#include <bits/stdc++.h>
using namespace std;
int main() {
    bool a[101]={false};
    int n,x,y,bil,cek=0;
    cin>>n;
    cin>>x;
    for (int i=0;i<x;i++) {
        cin>>bil;
        a[bil]=true;
    }
    cin>>y;
    for (int i=0;i<y;i++) {
        cin>>bil;
        a[bil]=true;
    }
    for (int i=1;i<=n;i++) {
        if (a[i]==false) {
            cek=1;
            break;
        }
    }
    if (cek) cout<<"Oh, my keyboard!"<<endl;
    else cout<<"I become the guy."<<endl;
}
