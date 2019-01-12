#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	vector<int> res;
	string password,pecah[20];
	string code[20];
	cin>>password;
	for (int i=0;i<10;i++) {
		cin>>code[i];
	}
	for (int i=0;i<80;i++) {
		if (i>=70) pecah[7].push_back(password[i]);
		else if (i>=60) pecah[6].push_back(password[i]);
		else if (i>=50) pecah[5].push_back(password[i]);
		else if (i>=40) pecah[4].push_back(password[i]);
		else if (i>=30) pecah[3].push_back(password[i]);
		else if (i>=20) pecah[2].push_back(password[i]);
		else if (i>=10) pecah[1].push_back(password[i]);
		else if (i>=0) pecah[0].push_back(password[i]);
	}
	for (int i=0;i<8;i++) {
		for (int j=0;j<10;j++) {
			if (pecah[i]==code[j]) {
				res.push_back(j);
				break;
			}
		}
	}
	for (auto &c : res) {
		cout<<c;
	}
	return 0;
}
