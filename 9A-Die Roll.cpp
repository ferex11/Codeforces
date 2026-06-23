#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int y, w;
  cin >> y >> w;
  int mx = max(y, w);
  int numerator = 6 - mx + 1;
  int denomerator = 6;
  int common = gcd(numerator, denomerator);
  cout << numerator / common << "/" << denomerator / common << "\n";
  return 0;
}
