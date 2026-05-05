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
    1 4 2 3 5

    1 4 3 2 5

    go for index 0 and 1
*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n; cin >> n;
        int a[n]; readv(a);
        for (int i = 0; i < (n); i++) {
            for (int j = 1; 2*j <= n; j++) {
                if (a[j-1] > a[2*j-1]) {
                    swap(a[j-1], a[2*j-1]);
                }
            }
        }

        if (is_sorted(a, a+n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}