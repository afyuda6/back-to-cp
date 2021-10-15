#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,res=0;
    string inc;
    cin>>num;
    for (int i=0;i<num;i++) {
        cin>>inc;
        if (inc=="++X" || inc=="X++") res++;
        else if (inc=="--X" || inc=="X--") res--;
    }
    cout<<res;
}
