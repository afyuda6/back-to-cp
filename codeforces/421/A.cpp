#include <bits/stdc++.h>
using namespace std;
int main() {
	 int arr[101]={0};
	 int n,a,b,x;
	 cin>>n>>a>>b;
	 for (int i=0;i<a;i++) {
 		cin>>x;
 		arr[x]=1;
 	}
 	for (int i=0;i<b;i++) {
 		cin>>x;
 		arr[x]=2;
 	}
 	for (int i=1;i<=100;i++) {
 		if (arr[i])
 			cout<<arr[i]<<' ';
 	}
}