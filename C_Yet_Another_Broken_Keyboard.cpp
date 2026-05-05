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
  dp[i][c] = number of substrings ending with c
  dp[i][c] = sum over dp[i-1][c] for all c that can be used
*/

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  string s; cin >> s;
  vector<int> a(26, 0);
  for (int i = 0; i < k; i++) {
    char c; cin >> c;
    a[c-'a'] = 1;
  }
  vector<int> dp(n+5, 0);
  for (int i = 1; i <= n; i++) {
    if (a[s[i-1]-'a'] == 1) {
      dp[i] = dp[i-1] + 1;
    }
  }
  int ans = 0;
  for (auto &i : dp) {
    ans += i;
  }

  cout << ans << "\n";
}
