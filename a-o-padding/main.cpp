#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int diff = n - s.size();

  cout << string(diff, 'o') + s << endl;
}
