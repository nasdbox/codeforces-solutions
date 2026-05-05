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
    dp[i][s] = max points i'll get till after ith task with stamina ending at s
    dp[0][1] = 0;  
    dp[i][new_s] = max(dp[i][new_s], dp[i-1][prev_s]+gain);  
    
*/

void solve() {
    int n; cin >> n;
    vi c(n), p(n);
    vector<vi> dp(n+5, vi(1e6+5, 0));
    dp
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}