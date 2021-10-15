#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int y,w;
	cin>>y>>w;
	int res=7-max(y,w);
	if (res==1) cout<<"1/6"<<endl;
	if (res==2) cout<<"1/3"<<endl;
	if (res==3) cout<<"1/2"<<endl;
	if (res==4) cout<<"2/3"<<endl;
	if (res==5) cout<<"5/6"<<endl;
	if (res==6) cout<<"1/1"<<endl;
	return 0;
}
//handle : fyudaa
