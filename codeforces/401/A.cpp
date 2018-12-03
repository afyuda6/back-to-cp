#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,neg=0,pos=0,num;
	cin>>n>>x;
	for (int i=0;i<n;i++) {
		cin>>num;
		if (num<0)
			neg-=num;
		if (num>0)
			pos+=num;
	}
	if (abs(neg-pos)%x==0)
		cout<<abs(neg-pos)/x<<endl;
	else
		cout<<abs(neg-pos)/x+1<<endl;
}
