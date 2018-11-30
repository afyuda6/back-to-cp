#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	if (n%10<=5) {
		cout<<n-n%10<<endl;
	}
	else if (n%10>5) {
		cout<<n+10-n%10<<endl;
	}
}
