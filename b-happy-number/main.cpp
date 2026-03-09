#include <bits/stdc++.h>

using namespace std;
void f(int n, int cnt) {
  int sum = 0;
  while (n > 0) {
    // nの各桁を取り出す
    int d = n % 10;
    sum += d * d;
    // nを10で割って次の桁に移る
    n /= 10;
  }
  if (sum == 1) {
    cout << "Yes" << endl;
    return;
  }
  // 300回程度繰り返せば十分である
  if (cnt >= 300) {
    cout << "No" << endl;
    return;
  }
  f(sum, cnt + 1);
}

int main() {
  int n;
  cin >> n;

  f(n, 0);
}
