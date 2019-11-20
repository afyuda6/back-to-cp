#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[1005]={0},n,x;
	arr[0]=1;
	arr[1001]=1;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		arr[x]++;
	}
	int counter=0,maks=0;
	for (int i=0;i<=1001;i++) {
		if (arr[i]) {
			counter++;
		}
		else {
			counter=0;
		}
		if (counter>maks) {
			maks=counter;
		}
	}
	if (maks>2) cout<<maks-2<<endl;
	else cout<<0<<endl;
}
