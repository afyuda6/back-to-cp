#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,counter=0,limit=0;
    cin>>n>>k;
    k=240-k;
    for (int i=1;i<=n;i++) {
        limit+=5*i;
        if (limit>k)
            break;
        counter++;
    }
    cout<<counter<<endl;
}
