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
    string s, t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int i = 0, j = 0;
    string ans;
    while (i < n and j < m) {
        if (s[i] == '?') {
            ans += t[j];
            j++;
        } else if (s[i] == t[j]) {
            ans += t[j];
            j++;
        } else {
            ans += s[i];
        }
        i++;
    }
    while (i < n) {
        if (s[i] == '?') {
            ans += 'a';
        } else {
            ans += s[i];
        }
        i++;
    }
    if (j == m) {
        cout << "YES\n";

        cout << ans << "\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}