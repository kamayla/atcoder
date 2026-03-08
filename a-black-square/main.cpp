#include <bits/stdc++.h>

using namespace std;

int main() {
  int p, q, x, y;
  cin >> p >> q >> x >> y;
  if (p <= x && (p + 99) >= x && q <= y && (q + 99) >= y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
