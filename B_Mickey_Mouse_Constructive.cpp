#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

void solve() {
    int x, y; cin >> x >> y;
    int diff = abs(x-y);
    if (diff < x and diff < y) {
        cout << max(diff, 1ll) << "\n";
        if (x > y) {
            for (int i = 0; i < y; i++) {
                cout << "-1 1 ";
            }
            for (int i = 0; i < diff; i++) {
                cout << "1 ";
            }
            cout << "\n";
        } else {
            for (int i = 0; i < x; i++) {
                cout << "-1 1 ";
            }
            for (int i = 0; i < diff; i++) {
                cout << "-1 ";
            }
            cout << "\n";
        }
    } else {
        cout << 2 << "\n";
        for (int i = 0; i < y; i++) {
            cout << "-1 "; 
        }
        for (int i = 0; i < x; i++) {
            cout << "1 ";
        }
        cout << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}