// Problem Link : https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

int solve(vector<vector<int>>& matrix) {
    int ans = 0;
    int row = -1;
    int col = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    ans = abs(2 - row) + abs(2 - col);

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    vector<vector<int>> matrix(5, vector<int> (5));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << solve(matrix);

    return 0;
}