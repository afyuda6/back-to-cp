#include <bits/stdc++.h>
using namespace std;
bool checkPerfect(int n) {
	int x=sqrt(n);
	return (x*x==n);
}
bool checkFibonacci(int n) {
	return checkPerfect(5*n*n+4) || checkPerfect(5*n*n-4);
}
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) {
		if (checkFibonacci(i)) {
			cout<<'O';
		}
		else cout<<'o';
	}
	cout<<endl;
}
