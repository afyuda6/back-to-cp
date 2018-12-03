#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,tmp,counter=1,maks=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (i!=0) {
			if (x>tmp)
				counter++;
			else
				counter=1;
			if (counter>maks)
				maks=counter;
		}
		tmp=x;
	}
	if (counter>maks)
		maks=counter;
	cout<<maks<<endl;
}
