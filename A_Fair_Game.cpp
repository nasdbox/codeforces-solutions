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
    vi a(n); readv(a); 
    map<int, int> cnt;
    for (auto &i : a) cnt[i]++;
    int ones = 0;
    int odd = 0;
    int even = 0;
    
    for (auto &[u, v] : cnt) {
        if (v == 1) ones++;
        else if (v&1) odd++;
        else even++;
    }

    if (ones&1^1 and (odd+even)&1^1) {
        cout << "YES\n";
        map<int, int> dup;
        for (auto &[u, v] : cnt) dup[v]++;
        map<int, vector<int>> ls;
        for (auto &[u, v] : cnt) ls[v].pb(u);
        for (auto &[u, v] : dup) {
            if (v&1^1) {
                cout << ls[u][0] << " " << ls[u][1] << "\n";
            }
        }
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}