#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)
typedef long double ld;
const ld EPS = 1e-12;
// Problem Statement
/*

*/

// Observations + Proofs
/*

*/
int sgn(ld val) { return (val > EPS) - (val < -EPS); }

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr); 
    ld a, b, c;
    while (cin >> a >> b >> c) {
        ld x[] = {a, b, c};
        sort(x, x+3);
        if (sgn(x[0]+x[1]-x[2]) != 1) {
            cout << "-1.000" << "\n";
            continue;
        }
        ld s = (a + b + c) / 2.0;
        ld ans = s*(s-a)*(s-b)*(s-c);
        ld area = (4.0 / 3.0) * sqrtl(ans);
        cout << fixed << setprecision(3) << area << "\n";
    }
}