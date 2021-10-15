#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    int j=0;
    int counter=0;
    while (n>0) {
        j++;
        i+=j;
        n-=i;
        if (n<0)
            break;
        counter++;
    }
    cout<<counter<<endl;
}
