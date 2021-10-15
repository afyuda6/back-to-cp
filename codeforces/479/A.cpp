#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d=(a+b)*c;
    int e=a*(b+c);
    int f=(a*b*c);
    int g=a+b+c;
    if (d>e && d>f && d>g) cout<<d<<endl;
    else if (e>f && e>g) cout<<e<<endl;
    else if (f>g) cout<<f<<endl;
    else cout<<g<<endl;
}
