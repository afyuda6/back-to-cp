#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,c=0,bi=0,ba=0,x;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>x;
		if (i%3==0) c+=x;
		else if (i%3==1) bi+=x;
		else ba+=x;
	}
	if (c==max(c,max(bi,ba))) cout<<"chest"<<endl;
	else if (bi==max(c,max(bi,ba))) cout<<"biceps"<<endl;
	else cout<<"back"<<endl;
	
}
