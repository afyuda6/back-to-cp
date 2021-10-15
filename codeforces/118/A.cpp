#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <char> a;
    string b;
    cin>>b;
    for (int i=0;i<b.length();i++) {
        if ((b[i]=='a') || (b[i]=='i') || (b[i]=='u') || (b[i]=='e') || (b[i]=='o') || (b[i])=='y');
        else if ((b[i]=='A') || (b[i]=='I') || (b[i]=='U') || (b[i]=='E') || (b[i]=='O') || (b[i])=='Y');
        else {
            a.push_back('.');
            a.push_back(tolower(b[i]));
        }
    }
    for (int i=0;i<a.size();i++) {
        cout<<a[i];
    }
}
