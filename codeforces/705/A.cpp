#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (i%2==1 && i==n) cout<<"I hate it"<<endl;
        else if (i%2==0 && i==n) cout<<"I love it"<<endl;
        else if (i%2==1) cout<<"I hate that ";
        else if (i%2==0) cout<<"I love that ";
    }
}
