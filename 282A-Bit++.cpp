#include<iostream>
#include<string>
using namespace std;

int solve(string bits) {
    if (bits[1] == '-')
        return -1;

    return 1;
}

int main() {
    int t;
    cin >> t;
    int result = 0;

    while (t--) {
        string bits;
        cin >> bits;

        result  += solve(bits);
    }
    cout << result << endl;

    return 0;
}
