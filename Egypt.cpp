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

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int x, y, z;
    while (cin >> x >> y >> z) {
        if (x == y and y == z and z == 0) break;
        vi a {x, y, z};
        sort(a.begin(), a.end());
        if (a[2]*a[2] == (a[0]*a[0] + a[1]*a[1])) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }
}