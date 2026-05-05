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
    how many pair exist (i, j) such that
        ai.aj = j - i holds true
        
        i and j must be different

    i want a data structure that can give me answer in O(1)
        i will give it index difference and it will give me 
*/

// Observations + Proofs
/*
    they are asking only # pairs
        so order doesn't matter (WRONG)
            we can sort them and do bs for every ai 
                O(NlogN) solution
    
        order matters ryt!

    we can use sqrt decomposition 

    but let's do it without the above concept


*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n; cin >> n;
        vi a(n); readv(a);
        
        // map<int, vi> m;

        // for (int i = 0; i < n; i++) m[a[i]].pb(i);

        // int ub = sqrt(n);
        int cnt = 0;

        // let's fix x and i
        // map<int, bool> visited;
        // for (int x = 1; x*x < n; x++) {
        //     for (int j = 0; j < n; j++) {
        //         if (a[j]*x >= n) continue;
        //         // if (not m.count(x)) continue;
        //         if (visited.count(x)) continue;
        //         for (auto i : m[x]) {
        //             if (x*a[j] == abs(i-j)) cnt++;
        //         }
        //         visited[x] = 1;
        //     }
        // }

        map<int, bool> vis;

        for (int x = 1; x*x < n; x++) {
            for (int j = 0; j < n; j++) {
                int i = j - x*a[j];
                if (i < n and i >= 0 and a[i] == x) {
                    cnt++;
                    vis[a[j]] = 1;
                }
            }

            // for (int i = 0; i < n; i++) {
            //     int j = i + x*a[i];
            //     if ()dfs
            // }
        }

        // for (int )

        for (int y = 1; y*y < n; y++) {
            if (vis.count(y)) continue;
            for (int i = 0; i < n; i++) {
                int j = i + y*a[i];
                if (j >= 0 and j < n and a[j] == y) {
                    cnt++;
                }
            }
        }

        

        cout << cnt << "\n";
    }
}