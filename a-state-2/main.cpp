#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  double n, m;

  cin >> n >> m;
  double x = ceil(n / 2);
  if (x >= m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
