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
    n = number of hurdles
    m = the number of powerups
    L = the position of the end (this is where we have to reach by using minimum amount of powerups)

    ask : min # powerups
*/

// Observations + Proofs
/*
    1 to L 
    there are many hurdles..

    she at position 1 initially.. so hurdle can atmost start from 2 to L-1

    there are m powerups at every x (xi <= x_i+1)
        so there can be multiple powerups at the same x..
        this powerup increase her jump power by vi

    so we have to jump atleast ri - li + 1
        before that we have to take as much as possible so that we are able to cross the hurdle


    i will try to pick the powerups until i got it the max
    but i also need to also make sure
        at every instant, if the hurdle is more than the current powerup sum then it will fail 

    
    for each hurdle let's see if can even reach there
        if my power sum is >= v - u + 2

*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    test {
        int n, m, L; cin >> n >> m >> L;
        vector<pair<int, int>> hurdle(n);
        vector<pair<int, int>> power(m);

        for (auto &[u, v] : hurdle) cin >> u >> v;
        for (auto &[u, v] : power) cin >> u >> v;

        int i = 0;
        int ans = 0;
        int flag = 1;
        for (auto &[u, v] : hurdle) {
            int req = v - u + 2;
            int p = ans;
            while (p < req) {
                if (power[i].first >= u or i >= m) {
                    break;
                }
                p += power[i].second;
                i++;
            }

            if (p >= req) {
                ans = p;
            } else {
                cout << -1 << "\n";
                flag = 0;
                break;
            }
        }

        if (flag) {
            cout << i << "\n";
        }
        
    }
}