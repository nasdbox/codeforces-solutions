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
    if i = j
        then a_j vanishes

        a1 - an is known..

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n; cin >> n;
        int a[n]; readv(a);
        int res[n];
        int s = 0;
        for (int i = 0; i+2 < n; i++) {
            int f1 = a[i];
            int f2 = a[i+1];
            int f3 = a[i+2];
            res[i] = (f3 - 2*f2 + f1) / 2;
            s += res[i];
        }
        int t = (a[n-1] + a[1] - a[n-2] - a[0]) / 2;
        int z = a[n-1] - a[0];
        int x = 0;
        for (int i = 0; i+2 < n; i++) {
            x += (n-1-2*(i-1)) * a[i];
        }
        int ans = (z - x) / (n-1);
        cout << ans << " ";
        for (int i = 0; i+2 < n; i++) cout << res[i] << " ";

        cout << ans - t << " ";
        cout << "\n";
    }
}