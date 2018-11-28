#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d=0;
	cin>>a>>b>>c;
	int x,y,z;
	x=a;
	y=b/2;
	z=c/4;
	d=min(x,min(y,z));
	cout<<7*d<<endl;
}
