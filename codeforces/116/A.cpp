#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,in,out,s=0,h=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>out>>in;
        s+=in-out;
        if (s>h) h=s;
    }
    cout<<h<<endl;
}
