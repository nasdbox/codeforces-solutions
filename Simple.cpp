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

// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ld pi = acos(-1.0);
    test {
        int ax, ay, bx, by, m, l; cin >> ax >> ay >> bx >> by >> m >> l;
        ld angle = m * pi / 180.0;
        ld dx = ax - bx;
        ld dy = ay - by;
        ld norm = sqrt(dx*dx + dy*dy);
        dx /= norm;
        dy /= norm; 
        ld newx = dx * cos(angle) - dy * sin(angle);
        ld newy = dx * sin(angle) + dy * cos(angle);
        ld norm2 = sqrt(newx*newx + newy*newy);
        assert(round(norm2) == 1 && "newx and newy are not correct");
        ld resx = bx + (ld)l * newx;
        ld resy = by + (ld)l * newy;
        cout << round(resx) << " " << round(resy) << "\n";
        // cout << resx << " " << resy << "\n";
    }
}