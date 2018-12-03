#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	string of,wm;
	cin>>x>>of>>wm;
	if (wm=="week") {
		if (x==5 || x==6)
			cout<<53<<endl;
		else
			cout<<52<<endl;
	}
	else if (wm=="month") {
		if (x<30)
			cout<<12<<endl;
		else if (x==30)
			cout<<11<<endl;
		else if (x==31)
			cout<<7<<endl;
	}
}
