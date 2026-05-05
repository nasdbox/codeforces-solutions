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
    int cnt = 1;
    test {
        int a[3]; readv(a);
        sort(a, a+3);
        if (a[0]+a[1] > a[2]) {
            if (a[0] == a[1] and a[1] == a[2]) {
                cout << "Case " << cnt++ << ": Equilateral\n";
            } else {
                if (a[0] == a[1] or a[0] == a[2] or a[1] == a[2]) {
                    cout << "Case " << cnt++ << ": Isosceles\n";
                } else {
                    cout << "Case " << cnt++ << ": Scalene\n";
                }
            }
        } else {
            cout << "Case " << cnt++ << ": Invalid\n";
        }
    }
}