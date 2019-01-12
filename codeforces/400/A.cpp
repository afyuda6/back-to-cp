#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	for (int m=0;m<t;m++) {
		int arr[]={1,2,3,4,6,12};
		int res[10]={0};
		int counter=0;
		string s;
		cin>>s;
		for (int i=0;i<12;i++) {
			if (s[i]=='X') res[0]=1;
		}
		for (int i=0;i<6;i++) {
			if (s[i]=='X' && s[i+6]=='X') res[1]=1;
		}
		for (int i=0;i<4;i++) {
			if (s[i]=='X' && s[i+4]=='X' && s[i+8]=='X') res[2]=1;
		}
		for (int i=0;i<3;i++) {
			if (s[i]=='X' && s[i+3]=='X' && s[i+6]=='X' && s[i+9]=='X') res[3]=1;
		}
		for (int i=0;i<2;i++) {
			if (s[i]=='X' && s[i+2]=='X' && s[i+4]=='X' && s[i+6]=='X' && s[i+8]=='X' && s[i+10]=='X') res[4]=1;
		}
		for (int i=0;i<2;i++) {
			if (s[i]=='X' && s[i+1]=='X' && s[i+2]=='X' && s[i+3]=='X' && s[i+4]=='X' && s[i+5]=='X' && s[i+6]=='X' && s[i+7]=='X' && s[i+8]=='X' && s[i+9]=='X' && s[i+10]=='X' && s[i+11]=='X') res[5]=1;
		}
		for (int i=0;i<6;i++) {
			if (res[i])
				counter++;
		}
		cout<<counter;
		if (counter>0) cout<<' ';
		for (int i=0;i<6;i++) {
			if (res[i])
				cout<<arr[i]<<'x'<<12/arr[i]<<' ';
		}
		 cout<<endl;
	}
	return 0;
}
