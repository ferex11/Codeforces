#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"

int numberOfBottles() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    while (n--) {
        int ai, bi;
        cin >> ai >> bi;
        a.push_back(ai);
        b.push_back(bi);
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (int j = 0; j < b.size(); j++) {
            if (i != j && a[i] == b[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            count++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << numberOfBottles() << endl;
    return 0;
}
