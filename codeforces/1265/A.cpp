#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, ll> pii;

char coba(char x) {
	char y;
	if (x == 'a')
		y = 'b';
	else if (x == 'b')
		y = 'c';
	else if (x == 'c')
		y = 'a';
	else if (x == '?')
		y = 'a';
	return y;
}

char coba(char x, char y) {
	char z;
	if (x == 'a') {
		if (y == 'a')
			z = 'b';
		else if (y == 'b')
			z = 'c';
		else if (y == 'c')
			z = 'b';
		else if (y == '?')
			z = 'c';
	}
	else if (x == 'b') {
		if (y == 'b')
			z = 'c';
		else if (y == 'c')
			z = 'a';
		else if (y == 'a')
			z = 'c';
		else if (y == '?')
			z = 'a';
	}
	else if (x == 'c') {
		if (y == 'c')
			z = 'a';
		else if (y == 'a')
			z = 'b';
		else if (y == 'b')
			z = 'a';
		else if (y == '?')
			z = 'b';
	}
	else if (x == '?') {
		if (y == 'a')
			z = 'b';
		else if (y == 'b')
			z = 'c';
		else if (y == 'c')
			z = 'a';
		else if (y == '?')
			z = 'a';
	}
	return z;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();

	map<char, ll> m;
	m['a'] = 0;
	m['b'] = 1;
	m['c'] = 2;
	ll t;
	cin >> t;
	while (t--) {
		vector<string> list;
		string s;
		cin >> s;
		if (s.length() == 1) {
			if (s[0] == '?')
				cout << 'a' << '\n';
			else
				cout << s << '\n';
		}
		else if (s.length() == 2) {
			if (s[0] == '?' && s[1] == '?') {
				cout << "ab" << '\n';
			}
			else if (s[0] == s[1]) {
				cout << -1 << '\n';
			}
			else {
				if (s[0] == '?') {
					s[0] = coba(s[1]);
				}
				else if (s[1] == '?') {
					s[1] = coba(s[0]);
				}
				cout << s << '\n';
			}
		}
		else {
			if (s[0] == '?')
				s[0] = coba(s[1]);
			if (s[s.length() - 1] == '?')
				s[s.length() - 1] = coba(s[s.length() - 2]);
			for (ll i = 1; i < s.length() - 1; i++) {
				if (s[i] == '?')
					s[i] = coba(s[i - 1], s[i + 1]);
			}
			bool ya = true;
			for (ll i = 1; i < s.length(); i++) {
				if (s[i] == s[i - 1])
					ya = false;
			}
			if (ya)
				cout << s << '\n';
			else
				cout << -1 << '\n';
		}
	}
	
 	return 0;
}
