#include <bits/stdc++.h>
using namespace std;
int main() {
    int cek=1;
    string a;
    cin>>a;
    for (int i=1;i<a.length();i++) {
        if (a[i]==tolower(a[i])) cek=0;
    }
    if (cek) {
        if (a[0]==tolower(a[0])) a[0]=toupper(a[0]);
        else if (a[0]==toupper(a[0])) a[0]=tolower(a[0]);
        for (int i=1;i<a.length();i++) {
            a[i]=tolower(a[i]);
        }
    }
    cout<<a<<endl;
}
