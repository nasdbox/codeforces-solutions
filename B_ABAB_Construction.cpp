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
  if (n % 2 == 1) {
    int as = 0, bs = 0;
    int flag = 0;
    if (s[0] == 'a' or s[0] == '?') as++;
    else {
      cout << "NO\n";
      return;
    }
    for (int i = 1; i < n; i++) {
      if (bs >= as-2 and bs <= as) {

      } else {
	flag = 1;
	break;
      }
      
      if (s[i] == 'a') as++;
      else if (s[i] == 'b') bs++;
      else {
	if (as < bs) as++;
	else bs++;
      }
    }
    // cout << flag << "\n";
    if ((not flag) and (as-1 == bs)) cout << "YES\n";
    else cout << "NO\n";
  } else {
    int as = 0, bs = 0;
    int flag = 0;
    int extra = 0;
    for (int i = 0; i < n; i++) {
      if ((bs >= as-1 and bs <= as) or (bs >= as-1+extra) and (bs <= as+extra)) {

      } else {
	flag = 1;
	break;
      }

      if (s[i] == 'a') as++;
      else if (s[i] == 'b') bs++;
      else {
	extra++;
      }
      
    }
    
    if (not flag) cout << "YES\n";
    else cout << "NO\n";
  }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
