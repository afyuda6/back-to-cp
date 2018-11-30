#include <bits/stdc++.h>
using namespace std;
int main() {
 	vector <char> v;
 	string st;
 	for (int i=1;i<=1000;i++) {
 		stringstream ss;
 		ss<<i;
 		st=ss.str();
 		for (int j=0;j<st.length();j++) {
 			v.push_back(st[j]);
 		}
 	}
 	int n;
 	cin>>n;
 	cout<<v[n-1]<<endl;
}