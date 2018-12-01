#include <bits/stdc++.h>
using namespace std;
int main() {
	map <char,char> alpha;
	string fst,snd,str;
	cin>>fst>>snd>>str;
	for (int i=0;i<26;i++) {
		alpha[fst[i]]=snd[i];
	}
	for (int i=0;i<str.length();i++) {
		if (islower(str[i]))
			cout<<alpha[str[i]];
		else if (isupper(str[i]))
			putchar(toupper(alpha[tolower(str[i])]));
		else
			cout<<str[i];
	}
	cout<<endl;
}
