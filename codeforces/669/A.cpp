#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a;
	cin>>a;
	if (a%3==0) {
		cout<<2*(a/3)<<endl;
	}
	else {
		cout<<2*(a/3)+1<<endl;
	}
}
