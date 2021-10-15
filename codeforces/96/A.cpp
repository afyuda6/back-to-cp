#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[102];
    int counter=0,cek=0;
    cin>>a;
    for (int i=1;i<strlen(a);i++) {
        if (a[i]==a[i-1]) {
            counter++;
            if (counter>=6) {
                cek=1;
                cout<<"YES"<<endl;
                break;
            }

        }
        if (a[i]!=a[i-1]) {
            counter=0;
        }
    }
    if (!cek) cout<<"NO"<<endl;

}
