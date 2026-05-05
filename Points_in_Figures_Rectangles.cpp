#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
#define int long long
#define inf LLONG_MAX
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define readv(a) for (auto &i : a) cin >> i;
#define test int tc; cin >> tc; while (tc--)
#define EPS 1e-12
// Problem Statement
/*

*/

// Observations + Proofs
/*

*/

struct Point {
    ld x, y;
    Point(ld x, ld y) : x(x), y(y) {}
};

struct Rect {
    Point p1; // upper left
    Point p2; // bottom right
    Rect(ld x1, ld y1, ld x2, ld y2) : p1(x1, y1), p2(x2, y2) {}
};

vector<Rect> R;
vector<Point> P;
int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    char ch;
    while (cin >> ch) {
        if (ch == 'r') {
            ld a, b, c, d; cin >> a >> b >> c >> d;
            R.eb(a, b, c, d);
        }
        if (ch == '*') {
            ld x, y;
            while (cin >> x >> y) {
                if (abs(x-9999.9) < EPS and abs(y-9999.9) < EPS) break;
                P.eb(x, y);
            }
            int ps = P.size();
            int rs = R.size();
            for (int i = 0; i < ps; i++) {
                Point p = P[i];
                bool ok = 0;
                for (int j = 0; j < rs; j++) {
                    Rect r = R[j];
                    if (p.x > r.p1.x + EPS and p.x < r.p2.x - EPS and p.y > r.p2.y + EPS and p.y < r.p1.y - EPS) {
                        cout << "Point " << i+1 << " is contained in figure "<< j+1 << "\n";
                        ok = 1;
                    }
                }
                if (not ok) {
                    cout << "Point " << i+1 << " is not contained in any figure" << "\n";
                }
            }
            break;
        }
    }
}