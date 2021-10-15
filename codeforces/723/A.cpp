#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c;
    d=max(a,max(b,c));
    e=min(a,min(b,c));
    cout<<d-e<<endl;
}
