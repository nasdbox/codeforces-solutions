#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)
typedef long double ld;

const ld EPS = 1e-12;

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int w, h, x, y; cin >> w >> h >> x >> y;
    cout << fixed << setprecision(6) << (w*h) / 2.0 << " ";
    ld slope = h / (ld)w;
    if (2*x == w and 2*y == h) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}