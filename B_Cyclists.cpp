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
    first time would be p-k if p > k
    n-k operations need to perform to be able to come up again 
*/

void solve() {
    int n, k, p, m; cin >> n >> k >> p >> m;
    vi a(n); readv(a);
    int val = a[p-1];
    int need = max(0, p-k) // need to remove
    sort(a.begin(), a.end());
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            x = i;
            break;
        }
    }
    for ()
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}