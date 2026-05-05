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
    int n; cin >> n;
    // if (n == 1) {
    //     cout << "NO\n";
    //     return;
    // }
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            cnt[x]++;
        }
    }
    int d = 0;
    int l = cnt.size();
    for (auto &[u, v] : cnt) {
        d = max(d, v);
    }
    if (d <= n*(n-1)) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}