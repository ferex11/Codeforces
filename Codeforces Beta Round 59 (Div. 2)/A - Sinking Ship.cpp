#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> rats, womanChild, man, captain;

    while (n--) {
        string name;
        string status;
        cin >> name >> status;

        if (status == "rat") {
            rats.push_back(name);
        } else if (status == "woman" || status == "child") {
            womanChild.push_back(name);
        }else if (status == "man") {
            man.push_back(name);
        } else {
            captain.push_back(name);
        }
    }

    for (auto &it : rats) {
        cout << it << endl;
    }
    for (auto &it : womanChild) {
        cout << it << endl;
    }
    for (auto &it : man) {
        cout << it << endl;
    }
    for (auto &it : captain) {
        cout << it << endl;
    }

    return 0;
}
