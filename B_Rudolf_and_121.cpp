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

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  test {
    int n; cin >> n;
    vi a(n); readv(a);
    bool ok = 1;
    for (int i = 0; i+2 < n; i++) {
      int &x = a[i];
      int &y = a[i+1];
      int &z = a[i+2];
      y -= 2*x;
      z -= x;
      x = 0;
      if (y < 0 or z < 0) {
	ok = 0;
	break;
      }
    }

    auto cond = all_of(a.begin(), a.end(), [](int x) {
      return x == 0;
    });

    if (cond and ok) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
