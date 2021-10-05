#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    int b = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 'B')
        b++;
    }
    if (s.length() % 2)
      cout << "NO\n";
    else if (b != s.length() / 2)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}