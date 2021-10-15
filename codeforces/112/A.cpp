#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[200],b[200];
    cin>>a>>b;
    for (int i=0;i<strlen(a);i++) {
        a[i]=tolower(a[i]);
    }
    for (int i=0;i<strlen(b);i++) {
        b[i]=tolower(b[i]);
    }
    cout<<strcmp(a,b)<<endl;
    return 0;
}
