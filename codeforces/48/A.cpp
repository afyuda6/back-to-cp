#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;
typedef set<int> si;
typedef long long int lli;
int main() {
	map <string,string> ms;
	ms["scissors"]="paper";
	ms["paper"]="rock";
	ms["rock"]="scissors";
	string f,m,s;
	cin>>f>>m>>s;
	if (ms[f]==m && ms[f]==s)
		cout<<"F"<<endl;
	else if (ms[m]==f && ms[m]==s)
		cout<<"M"<<endl;
	else if (ms[s]==f && ms[s]==m)
		cout<<"S"<<endl;
	else
		cout<<"?"<<endl;
	return 0;
}
//handle : fyudaa
