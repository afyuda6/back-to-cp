#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,x,y,d;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>n>>x>>y>>d;
		int a=abs(x-y)/d;
		int b=ceil((double)abs(x-1)/d)+abs(y-1)/d;
		int c=ceil((double)abs(n-x)/d)+abs(n-y)/d;
		if ((y-1)%d==0 && (n-y)%d==0 && abs(x-y)%d==0)
			cout<<min(a,min(b,c))<<endl;
		else if ((y-1)%d==0 && (n-y)%d==0)
			cout<<min(b,c)<<endl;
		else if ((y-1)%d==0 && abs(x-y)%d==0)
			cout<<min(a,b)<<endl;
		else if ((n-y)%d==0 && abs(x-y)%d==0)
			cout<<min(a,c)<<endl;
		else if (abs(x-y)%d==0)
			cout<<a<<endl;
		else if ((y-1)%d==0)
			cout<<b<<endl;
		else if ((n-y)%d==0)
			cout<<c<<endl;
		else cout<<-1<<endl;
	}
}
