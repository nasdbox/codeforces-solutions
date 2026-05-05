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
  dp[p*x] = min(dp[p*x], dp[p] + 1)
*/

static const int MXN = 3e5;

int dp[MXN+5];

void solve() {
  int n; cin >> n;
  vi a(n); readv(a);
  for (auto &i : dp) i = 998448343;
  for (auto &x : a) dp[x] = 1;
  //int p = 1;
  for (auto &x : a) {
    for (int p = 1; p <= 100; p++) {
      if (p*x > 3e5) continue;
      dp[p*x] = min(dp[p*x], dp[p] + 1);
    }
  }

  for (int i = 1; i <= n; i++) {
    if (dp[i] == 998448343) {
      cout << -1 << " ";
      continue;
    }
    cout << dp[i] << " ";
  }
  cout << "\n";
 }

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
