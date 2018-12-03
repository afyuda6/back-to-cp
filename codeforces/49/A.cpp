#include <bits/stdc++.h>
using namespace std;
int main() {
	 char vowel[]="AIUEOY";
	 char s[150];
 	char c;
 	fgets(s,150,stdin);
 	for (int i=strlen(s)-1;i>=0;i--) {
 		if (isalpha(s[i])) {
 			c=s[i];
 			break;
 		}
 	}
 	c=toupper(c);
 	for (int i=0;i<6;i++) {
 		if (c==vowel[i]) {
 			cout<<"YES"<<endl;
 			return 0;
 		}
 	}
 	cout<<"NO"<<endl;
 	return 0;
}