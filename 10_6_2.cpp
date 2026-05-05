#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
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
    ld pi = acos(-1);
    test {
        int l; cin >> l;
        double b = l * 0.6;
        double r = l * 0.2;
        cout << fixed << setprecision(2) << pi*r*r << " " << l*b - pi*r*r << "\n";
    }
}