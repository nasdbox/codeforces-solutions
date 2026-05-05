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
    double pi = 2*acos(0.0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        double r; cin >> r;
        double ar1 = 4*r*r;
        double ar2 = pi * r * r;
        cout << fixed << setprecision(2) << "Case " << i << ": " << ar1 - ar2 << "\n";
    }
}