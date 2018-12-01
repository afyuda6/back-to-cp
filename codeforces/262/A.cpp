#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,k,num,cnt,res=0;
	cin>>n>>k;
	for (int i=0;i<n;i++) {
		cin>>num;
		cnt=0;
		while (num) {
			if (num%10==7 || num%10==4) {
				cnt++;
			}
			num/=10;
		}
		if (cnt<=k)
			res++;
	}
	cout<<res<<endl;
}
