#include <bits/stdc++.h>
using namespace std;
int main() {
    float n,m,a,b,counter=0;
    cin>>n>>m>>a>>b;
    if (n>m) {
        if ((b/m)<=a) {
            counter+=(int)(n/m)*b;
            n-=(int)(n/m)*m;
        }
        if ((b/m)>a) {
            counter+=n*a;
            n-=n*a;
        }
    }
    if (n>0) {
        if ((n*a)>=b) counter+=b;
        else if ((n*a)<b) counter+=n*a;
    }
    cout<<(int)counter<<endl;
}
