#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y,a=0,b=0,c=0;
	cin>>x>>y;
	for (int i=1;i<=6;i++) {
		if (abs(x-i)<abs(y-i)) {
			a++;
		}
		else if (abs(x-i)>abs(y-i)) {
			c++;
		}
		else b++;
	}
	cout<<a<<' '<<b<<' '<<c<<endl;
}
