#include <bits/stdc++.h>
using namespace std;
int main() {
	bool sereja=true;
	int n,a[1005],s=0,d=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=0;i<n;) {
		if (sereja) {
			if (a[i]>=a[n-1]) {
				s+=a[i];
				i++;
			}
			else {
				s+=a[n-1];
				n--;
			}
		}
		else {
			if (a[i]>=a[n-1]) {
				d+=a[i];
				i++;
			}
			else {
				d+=a[n-1];
				n--;
			}
		}
		if (sereja) sereja=false;
		else if (!sereja) sereja=true;
		//cout<<s<<' '<<d<<endl;
	}
	cout<<s<<' '<<d<<endl;
}
