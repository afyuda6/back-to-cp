#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sa,pu,ra,ri,m;
    cin>>n;
    n++;
    sa=n%10;
    pu=(n/10)%10;
    ra=(n/100)%10;
    ri=(n/1000)%10;
    while (sa==pu || sa==ra || sa==ri || pu==ra || pu==ri || ra==ri) {
        n++;
        sa=n%10;
        pu=(n/10)%10;
        ra=(n/100)%10;
        ri=(n/1000)%10;
    }
    cout<<n<<endl;
}
