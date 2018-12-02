#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y,z,t1,t2,t3,stairs,elevator;
	cin>>x>>y>>z>>t1>>t2>>t3;
	stairs=abs(x-y)*t1;
	elevator=abs(z-x)*t2+abs(x-y)*t2+3*t3;
	if (elevator<=stairs)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
