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
    string s; cin >> s;
    int ans = 0;
    vector<int> seen(26, 0);
    for (int i = 0; i < n; i++) {
        if (not seen[s[i]-'a']) {
            seen[s[i]-'a'] = 1;
            ans += n - i;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}