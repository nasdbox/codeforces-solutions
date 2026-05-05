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
    define states:
        which stack, and how many plates
    you can pick in any order
    dp[i][j] = maximum beauty after picking some m from ith stack to make upto j
    dp[i][j-m] = maximum beauty after picking m
*/

void solve() {
    int n, k, p; cin >> n >> k >> p;
    vector<vi> stacks(n, vi(k));
    for (auto &i : stacks) readv(i);
    int dp[n+5][p+5];
    memset(dp, 0xc0, sizeof(dp));

}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}