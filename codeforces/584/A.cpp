#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if (a==1 && b==10) {
        cout<<-1<<endl;
        return 0;
    }
    else if (b==10) {
        for (int i=1;i<a;i++)
            cout<<1;
        cout<<0<<endl;
        return 0;
    }
    for (int i=1;i<=a;i++) {
        cout<<b;
    }
    cout<<endl;
}
