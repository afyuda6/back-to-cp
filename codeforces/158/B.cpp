#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c[100001],counter[5]={0};
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>c[i];
        if (c[i]==4) counter[4]++;
        if (c[i]==3) counter[3]++;
        if (c[i]==2) counter[2]++;
        if (c[i]==1) counter[1]++;
    }
    counter[0]+=counter[4];
    counter[4]=0;
    if (counter[3]>=counter[1]) {
        counter[0]+=counter[1];
        counter[3]-=counter[1];
        counter[1]=0;
        counter[0]+=counter[3];
        counter[3]=0;
    }
    else if (counter[3]<counter[1]) {
        counter[0]+=counter[3];
        counter[1]-=counter[3];
        counter[3]=0;
    }
    counter[0]+=counter[2]/2;
    counter[2]-=(counter[2]/2)*2;
    if (counter[2]) counter[1]-=2;
    counter[0]+=counter[2];
    if (counter[1]>0) {
        counter[0]+=counter[1]/4;
        counter[1]-=(counter[1]/4)*4;
    }
    if (counter[1]>0 && counter[1]<4) counter[0]++;
    cout<<counter[0]<<endl;
}
