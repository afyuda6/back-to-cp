#include <bits/stdc++.h>
using namespace std;
int main()  {
    int n,counter=0;
    char s[55];
    char tmp='0';
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>s[i];
        if (s[i]==tmp) counter++;
        tmp=s[i];
    }
    cout<<counter<<endl;
}
