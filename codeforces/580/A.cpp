#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,tmp=0,res=0,counter=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a;
        if (a>=tmp) counter++;
        if (a<tmp) counter=1;
        if (counter>res) res=counter;
        tmp=a;
    }
    cout<<res<<endl;
}
