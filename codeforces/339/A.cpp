#include <bits/stdc++.h>
using namespace std;
int main() {
    int count1=0,count2=0,count3=0,countt=0;
    string a;
    cin>>a;
    for (int i=0;i<a.length();i++) {
        if (a[i]=='1') count1++;
        if (a[i]=='2') count2++;
        if (a[i]=='3') count3++;
        if (a[i]=='+') countt++;
    }
    while (count1>0) {
        cout<<1;
        count1--;
        if (countt>0) cout<<'+';
        countt--;
    }
    while (count2>0) {
        cout<<2;
        count2--;
        if (countt>0) cout<<'+';
        countt--;
    }
    while (count3>0) {
        cout<<3;
        count3--;
        if (countt>0) cout<<'+';
        countt--;
    }
    cout<<endl;
}
