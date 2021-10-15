#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,A=0,D=0;
    char s;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>s;
        if (s=='A') A++;
        if (s=='D') D++;
    }
    if (A>D) cout<<"Anton"<<endl;
    if (A<D) cout<<"Danik"<<endl;
    if (A==D) cout<<"Friendship"<<endl;
}
