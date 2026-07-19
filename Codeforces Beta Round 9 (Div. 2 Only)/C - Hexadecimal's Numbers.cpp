#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  long long cnt = 0;
  queue<long long> q;
  q.push(1);
  while (!q.empty()) {
    long long curNum = q.front();
    q.pop();
    if (curNum <= n) {
      cnt++;
      q.push(curNum * 10 + 0);
      q.push(curNum * 10 + 1);
    }
  }
  cout << cnt << "\n";
  return 0;
}
