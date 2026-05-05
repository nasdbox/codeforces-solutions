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
    states:
        total sum <= k
        sub sum <= x
    
    dp[i] = number of coins that can be made using first i coins
    dp[i] = dp[i-1]
    dp[0] = 0;
        
*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vi c(n); readv(c);
    set<int> ans;
    ans.insert(0);
    for (int i = 0; i < n; i++) {
        vi t;
        for (auto &k : ans) {
            t.pb(k+c[i]);
        }
        for (auto &k : t) ans.insert(k);
    }
    
    for (auto &i : ans) {
        if (i > k) break;
        cout << i << " ";
    }
    cout << "\n";
}