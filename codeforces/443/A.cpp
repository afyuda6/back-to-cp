#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int counter=s.length()/3;
    for (int j=1;j<s.length();j+=3) {
        for (int i=j+3;i<s.length();i+=3) {
            if (s[j]==s[i]) {
                counter--;
                break;
            }
        }
    }
    cout<<counter<<endl;
}
