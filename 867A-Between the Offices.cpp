#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
  int n;
	cin >> n;
	string s;
	cin >> s;
	int seattleToSF = 0;
	int sfToSeattle = 0;
	for (int i = 1; i < n; i++) {
		if (s[i - 1] == 'S' && s[i] == 'F') seattleToSF++;
		else if (s[i - 1] == 'F' && s[i] == 'S') sfToSeattle++;
	}
	if (seattleToSF > sfToSeattle) cout << "YES";
	else cout << "NO";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
