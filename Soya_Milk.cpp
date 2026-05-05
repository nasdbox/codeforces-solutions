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
    int l, w, h, theta; cin >> l >> w >> h >> theta;
    double pi = acos(-1.0);
    double rad = theta * pi / 180.0;
    double dh = l * tan(rad);
    double ar = 0.5 * l * dh;
    double vol = ar * w;
    cout << fixed << setprecision(3) << l*w*h - vol << " mL\n";
}