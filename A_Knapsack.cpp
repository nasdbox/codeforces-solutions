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
    int n, w; cin >> n >> w;
    vi a(n); readv(a);
    int L = (w+1)/2;
    bool flag = 0;
    vi ans;
    for (int i = 0; i < n; i++) {
        if (a[i] >= L and a[i] <= w) {
            ans.push_back(i+1);
            flag = 1;
            break;
        }
    }
    if (flag) {
        cout << 1 << "\n";
        for (auto &i : ans) cout << i << " ";
        cout << "\n";
        return;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < w) {
            sum += a[i];
            ans.pb(i+1);
            if (sum >= L) break; // maybe wrong
        }
    }
    if (sum >= L and sum <= w) {
        cout << ans.size() << "\n";
        for (auto &i : ans) cout << i << " ";
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}