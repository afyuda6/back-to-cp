#include <bits/stdc++.h>
using namespace std;
int main() {
    int s[10];
    for (int i=0;i<4;i++) {
        cin>>s[i];
    }
    int counter=0;
    for (int i=0;i<4;i++) {
        for (int j=i+1;j<4;j++) {
            if (s[j]==s[i]) {
                counter++;
                break;
            }
        }
    }
    cout<<counter<<endl;
}
