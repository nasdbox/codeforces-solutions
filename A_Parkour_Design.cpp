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
        int x, y; cin >> x >> y;
        if ((x+y) >= 0 and (x+y)%3 == 0) {
	  if (x >= 2*y and x >= -4*y and (x-2*y) % 3 == 0) {
	    cout << "YES\n";
	  } else {
	    cout << "NO\n";
	  }
        } else {
            cout << "NO\n";
        }
    }
}
