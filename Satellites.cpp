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
    double pi =  2*acos(0.0);
    double RAD = 6440;
    int dis, ang;
    string s;
    while (cin >> dis >> ang >> s) {
        double a = (double)ang;
        double r = (double)dis + RAD;
        if (s == "min") {
            a /= 60.0;
        }

        if (a > 180) {
            a = 360.0 - a;
        }
        double rad = a * pi / 180.0;
        double l = r * sin(rad/2.0);
        cout << fixed << setprecision(6) << r*rad << " " << 2*l << "\n";
    }
}