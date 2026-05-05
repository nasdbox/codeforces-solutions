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
    int n, x; cin >> n >> x;
    int a[n]; readv(a);
    sort(a, a+n);
    int cnt = 0;
    int curr = 0;
    int i = 0;
    while (curr + a[i] <= x) {
        cnt++;
        curr += a[i++];
    }

    cout << cnt << "\n";
}