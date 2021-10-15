#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	int n;
	cin>>n;
	if (n<=10 || n>21)
		cout<<0<<endl;
	else if (n<20)
		cout<<4<<endl;
	else if (n==20)
		cout<<15<<endl;
	else if (n==21)
		cout<<4<<endl;
	return 0;
}
//handle : fyudaa
