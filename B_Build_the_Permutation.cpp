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
    <> = a
    >< = b

    <>><<>><<>><<>>
    1324

    2314

    4132

        no. of b should be on left and no. of a should be on right

    6 4 0
    13245

    1 2 3 4
    1 3 2 4

    

    1 2 3 4 5 6
    2 1

    if a == b+1
        1 n 2 n-1 3 ...


    if a+1 == b
        n 1 n-1 2 ...
    
    if a == b
        if a == b == 0
            1 2 3 4...
        
        let's start with a = b + 1
        1 n 2 n-1 .. 

    3 6  5 2  4 1

    1 2

    4 1 5   2 6   3
1


    6 2 2
    1 6 2 5 3 4


    6 1 1
    1 6 2 5

    1 2 3 4

    

    1 4 2 3 5 6

    3 + a + b - 1
*/

void solve() {
    int n, a, b; cin >> n >> a >> b;
    vi ans(n);

    if (a+b > n-2 or abs(a-b) > 1) {
        cout << -1 << "\n";
        return;
    }

    // swap(a, b);
    
    int max_num = 3 + a + b - 1;
    if (a == b+1) {
        int x = n-max_num + 1;
        // int g = n - max_num;
        int g = 0;
        for (int i = 0; i < max_num; i++) {
            if (i&1^1) {
                ans[i] = x;
                x++;
            } else {
                ans[i] = n-g;
                g++;
            }
        }

        for (int i = max_num; i < n; i++) {
            ans[i] = (n-i);
        }
    } else if (a+1 == b) {
        // int x = n-max_num+1;
        int x = 1;
        int g = n-max_num;
        for (int i = 0; i < max_num; i++) {
            if (i&1^1) {
                ans[i] = n-g;
                g++;
            } else {
                ans[i] = x;
                x++;
            }
        }

        for (int i = max_num; i < n; i++) {
            ans[i] = i+1;
        }
    } else { // a == b
        if (a == 0) {
            for (int i = 0; i < n; i++) ans[i] = i+1;
        } else {
            int x = 1;
            int g = n-max_num;
            for (int i = 0; i < max_num; i++) {
                if (i&1^1) {
                    ans[i] = x;
                    x++;
                } else {
                    ans[i] = n-g;
                    g++;
                }
            }
            // a = b + 1  so 
            for (int i = max_num; i < n; i++) {
                ans[i] = i+1;
            }
        }
    }

    for (auto &i : ans) cout << i << " ";
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test solve();
}