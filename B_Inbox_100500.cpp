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
    the problem is more about what the first letter should i read
*/

void solve() {
    int n; cin >> n;
    bool ok = 0;
    int ans = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {   
            ok = 1;
            ans++;
        } else if (ok) {
            ans++;
            ok = 0;
        }
    }

    if (not x and ans) ans--;

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}