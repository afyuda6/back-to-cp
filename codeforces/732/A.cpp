#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,r,res;
    cin>>k>>r;
    int i=1;
    res=k;
    while (res%10!=0 && res%10!=r) {
        i++;
        res=k*i;
    }
    if (res%10==0 || res%10==r) {
        cout<<i<<endl;
    }
}
