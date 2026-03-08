#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  char c = s[0];
  s[0] = c + 32;
  cout << "Of" << s << endl;
}
