#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,s;
	cin>>n>>s;
	if (s%n!=0)
		cout<<s/n+1<<endl;
	else
		cout<<s/n<<endl;
}
