#include <bits/stdc++.h>
using namespace std;
int mi(int x,int y) {
    if (x>=y) return y;
    if (x<y) return x;
}
int main() {
    int n,m;
    cin>>n>>m;
    if (mi(n,m)%2==0) cout<<"Malvika"<<endl;
    if (mi(n,m)%2==1) cout<<"Akshat"<<endl;
}
