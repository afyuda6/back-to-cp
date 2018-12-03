#include <bits/stdc++.h>
using namespace std;
int main() {
 	int n;
 	cin>>n;
 	int i=1;
 	while (n>0) {
 		n-=i;
 		i++;
 	}
 	if (n==0)
 		cout<<"YES"<<endl;
 	else
 		cout<<"NO"<<endl;
}