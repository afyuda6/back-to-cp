#include <bits/stdc++.h>
using namespace std;
int main() {
 	int k,maks=INT_MIN,x;
 	cin>>k;
 	for (int i=0;i<k;i++) {
 		cin>>x;
 		if (x>maks)
 			maks=x;
 	}
 	cout<<max(0,maks-25)<<endl;
}