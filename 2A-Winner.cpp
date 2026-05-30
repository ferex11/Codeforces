#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
	int n;
	cin >> n;
	vector<pair<string, int>> v;
	unordered_map<string, int> finalScore;
	for (int i = 0; i < n; i++) {
		string name;
		int score;
		cin >> name >> score;
		v.pb({name, score});
		finalScore[name] += score;
	}
	int maxScore = INT_MIN;
	for (auto it : finalScore)
		maxScore = max(maxScore, it.second);
	unordered_map<string, int> mpp;
	for (auto it : v) {
		string name = it.first;
		int score = it.second;
		mpp[name] += score;
		if (mpp[name] >= maxScore && finalScore[name] == maxScore) {
			cout << name << endl;
			return;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
