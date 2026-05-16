// Problem Link : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

class SegmentTree {
private:
    vector<ll> seg;
    vector<int> arr;
    int n;
    void build(int ind, int low, int high) {
        if (low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid);
        build(2 * ind + 2, mid + 1, high);
        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }
    ll query(int ind, int low, int high, int l, int r) {
        if (low > r || high < l)
			return 0;
		if (l <= low && high <= r)
			return seg[ind];
        int mid = low + (high - low) / 2;
        ll leftRes = query(2 * ind + 1, low, mid, l, r);
        ll rightRes = query(2 * ind + 2, mid + 1, high, l, r);
        return leftRes + rightRes;
    }
    void update(int ind, int low, int high, int pos, int val) {
        if (low == high) {
            seg[ind] = val;
            arr[pos] = val;
            return;
        }
        int mid = low + (high - low) / 2;
        if (pos <= mid)
            update(2 * ind + 1, low, mid, pos, val);
        else 
            update(2 * ind + 2, mid + 1, high, pos, val);
        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }
public:
    SegmentTree(vector<int>& input) {
        arr = input;
        n = arr.size();
        seg.resize(4 * n);
        build(0, 0, n - 1);
    }
    ll getSum(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }
    void setValue(int pos, int val) {
        update(0, 0, n - 1, pos, val);
    }
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    SegmentTree smt(v);
    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int pos, val;
            cin >> pos >> val;
            smt.setValue(pos, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << smt.getSum(l, r - 1) << endl;
        }
    }
	return 0;
}
