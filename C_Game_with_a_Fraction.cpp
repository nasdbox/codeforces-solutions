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
        int p, q; cin >> p >> q;
        if (p >= q) {
            cout << "Alice\n";
            continue;
        }

        if (3*p >= 2*q) {
            cout << "Bob\n";    
        } else {
            cout << "Alice\n";
        }

    }
}