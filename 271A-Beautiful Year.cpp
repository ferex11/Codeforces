#include<iostream>
#include<vector>
using namespace std;

bool solve(int y) {
    vector<int> freq(10, 0);

    while (y > 0) {
        int digit = y % 10;
        freq[digit]++;
        y /= 10;
    }

    for (auto &it : freq) {
        if (it > 1) {
            return false;
        }
    }

    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (solve(y)) {
            cout << y << endl;
            break;
        }
        
        y++;
    }

    return 0;
}
