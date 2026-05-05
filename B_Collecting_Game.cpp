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
    if your score is greater than ai
        remove that ai and add it to your score
*/

void solve() {
    int n; cin >> n;
    vi a(n); readv(a);
    map<int, int> bak;
    for (int i = 0; i < n; i++) {
        bak[a[i]] = i;
    }
    map<int, int> indices;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        indices[a[i]] = i;
    }

    vi pref(n, 0);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + a[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int val = a[i];
        int ind = indices[val];
        int p = pref[ind];
        int ge = upper_bound(a.begin(), a.end(), p) - a.begin();
        if (p > a[n-1]) ge = n;
        ans[bak[val]] = ge-1;
    }
    for (auto &i : ans) cout << i << " ";
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}