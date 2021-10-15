#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    char s[102];
    cin>>n;
    int counter=n;
    for (int i=0;i<n;i++) {
        cin>>s[i];
        s[i]=tolower(s[i]);
    }
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (s[j]==s[i]) {
                counter--;
                break;
            }
        }
    }
    if (counter==26) cout<<"YES"<<endl;
    if (counter<26) cout<<"NO"<<endl;
}
