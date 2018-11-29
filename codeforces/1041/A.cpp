#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,maks=INT_MIN,mins=INT_MAX,x;
	cin>>n;
	for (long long int i=0;i<n;i++) {
		cin>>x;
		if (x>maks) maks=x;
		if (x<mins) mins=x;
	}
	cout<<maks-mins+1-n<<endl;
}
