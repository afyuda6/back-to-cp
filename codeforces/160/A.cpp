#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a[100],tmp,counter=0,counter2=0,counter3=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        counter+=a[i];
    }
    for (int i=0;i<n;i++) {
        for (int j=n-1;j>i;j--) {
            if (a[j]>a[j-1]) {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
        counter2+=a[i];
        counter3++;
        if (counter2>(counter)/2) {
            break;
        }
    }
    cout<<counter3<<endl;
}
