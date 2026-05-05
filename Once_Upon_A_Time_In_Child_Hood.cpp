#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    test {
        int x1, y1, r, x2, y2; cin >> x1 >> y1 >> r >> x2 >> y2;
        int dis = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        cout << dis - r*r << "\n";
    }
}