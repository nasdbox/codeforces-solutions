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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vi x = {a, b, c, d};
        sort(x.begin(), x.end());
        if (x[0] == x[3]) {
            cout << "square\n";
        } else if (x[0] == x[1] and x[2] == x[3]) {
            cout << "rectangle\n";
        } else {
            if (x[0]+x[1]+x[2] >= x[3]) {
                cout << "quadrangle\n";
            } else {
                cout << "banana\n";
            }
        }
    }
}