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

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        ld r1, r2, r3; cin >> r1 >> r2 >> r3;
        ld k1 = 1.0 / r1;
        ld k2 = 1.0 / r2;
        ld k3 = 1.0 / r3;
        ld k4 = k1 + k2 + k3 + 2.0 * sqrt(k1*k2 + k2*k3 + k3*k1);
        ld ans = 1.0 / k4;
        cout << fixed << setprecision(6) << ans << "\n";
    }
}