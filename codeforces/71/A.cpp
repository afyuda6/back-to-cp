#include <bits/stdc++.h>
using namespace std;
int main() {
    int b;
    cin>>b;
    for (int i=1;i<=b;i++) {
        char a[101];
        cin>>a;
        if (strlen(a)>10) {
            cout<<a[0];
            cout<<strlen(a)-2;
            cout<<a[strlen(a)-1]<<endl;
        }
        else {
            cout<<a<<endl;
        }
    }
}
