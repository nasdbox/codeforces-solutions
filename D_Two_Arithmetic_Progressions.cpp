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

typedef __int128_t int128;

int extgcd(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int g = extgcd(b % a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return g;
}

void solve() {
    int a1, b1, a2, b2, L, R;
    cin >> a1 >> b1 >> a2 >> b2 >> L >> R;
    int k1, l1;
    int g = extgcd(a1, a2, k1, l1);
    if ((b2-b1)%g != 0) {
        cout << 0 << "\n";
        return;
    }
    int128 mod_k = a2 / g;
    int128 k = (int128)k1 * ((b2 - b1) / g);
    k = (k % mod_k + mod_k) % mod_k;
    int128 x_base = (int128)a1 * k + b1;
    int128 s = (int128)a1 / g * a2;
    int128 leff = max({(int128)L, (int128)b1, (int128)b2});
    int128 reff = R;
    if (x_base < leff) {
        x_base += ((leff - x_base + s - 1) / s) * s;
    }

    if (x_base > reff) {
        cout << 0 << "\n";
        return;
    }

    int ans = (int)((reff - x_base) / s + 1);
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
}