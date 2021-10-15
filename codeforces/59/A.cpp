#include <bits/stdc++.h>
using namespace std;
int main() {
    int lo=0,up=0;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++) {
        if (s[i]==tolower(s[i])) lo++;
        if (s[i]==toupper(s[i])) up++;
    }
    for (int i=0;i<s.length();i++) {
        if (lo>=up) {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
        if (lo<up) {
            s[i]=toupper(s[i]);
            cout<<s[i];
        }
    }
    cout<<endl;
}
