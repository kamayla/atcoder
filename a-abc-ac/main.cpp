#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int mid = (n + 1) / 2;
  cout << s.erase(mid - 1, 1) << endl;
}
