// Problem Link : https://codeforces.com/problemset/problem/260/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a; 
    int b, n;
    cin >> a >> b >>n;

    int rem = a % b;
    string result = to_string(a);

    while (n--) {
        bool found = false;

        for (int d = 0; d <= 9; d++) {
            if ((rem * 10 + d) % b == 0) {
                result.push_back(char('0' + d));
                rem = (rem * 10 + d) % b;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "-1" << endl;
            return 0;
        }
    }
    
    cout << result << endl;
}
