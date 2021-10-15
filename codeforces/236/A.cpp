#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int a=s.length();
    for (int i=0;i<s.length();i++) {
        for (int j=i+1;j<s.length();j++) {
            if (s[j]==s[i]) {
                a--;
                break;
            }
        }
    }
    if (a%2==1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}
