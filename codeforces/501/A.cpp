#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ispoweroftwo(lli n) {
	return (ceil(log2(n))==floor(log2(n)));
}
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int misha=max(3*a/10,a-a/250*c);
	int vasya=max(3*b/10,b-b/250*d);
	if (misha==vasya) cout<<"Tie"<<endl;
	else
		(misha>vasya) ? cout<<"Misha"<<endl : cout<<"Vasya"<<endl;
	return 0;
}
