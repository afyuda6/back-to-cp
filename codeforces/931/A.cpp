#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,d,res=0;
	cin>>a>>b;
	d=abs(a-b);
	for (int i=1;i<=(d/2);i++) {
		res+=i;
	}
	for (int i=1;i<=d-(d/2);i++) {
		res+=i;
	}
	cout<<res<<endl;
}
