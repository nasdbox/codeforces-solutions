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
    int n, m; cin >> n >> m;
    int N = n - (m/2) - 1;
    int K = m - (m/2) - 1;
    if (K < 0 or K > N) {
        cout << 0 << "\n";
    } else {
        if ((N&K) == K) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}


int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}