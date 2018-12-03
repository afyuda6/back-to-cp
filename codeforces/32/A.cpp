#include <bits/stdc++.h>
using namespace std;
int main() {
	 vector <int> v;
	 int n,d,x,res=0;
	 cin>>n>>d;
	 for (int i=0;i<n;i++) {
 		cin>>x;
 		v.push_back(x);
 	}
 	for (int i=0;i<n;i++) {
 		for (int j=0;j<n;j++) {
 			if (i==j);
 			else if (abs(v[i]-v[j])<=d)
 				res++;
 		}
 	}
 	cout<<res<<endl;
 	
}