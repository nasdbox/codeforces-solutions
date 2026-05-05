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
    locations are numbers
    we have to select those numbers that product to ghost spawning area
        ghost spawning area = the number should be divisible by 1..9


    1 2 3 4 5 6 7

    7 * 6 * 3 * 4 * 5 (1 selection that can make a ghost spawning area)

    3 * 6 * 5 * 7 * 4

    2^2 (to select more left out elements because there are only 2 left)

    1 2 3 6 9 5 7 

    9 8 7 6 5 4 3 2 1

    dp[i][j] = number of ways to make ghost spawning area when the last pos is i and j numbers are consumed by 

    dp[i-1] = number of ways to make ghost spwaning area when the last pos is i-1
        ai either i will take it or i won't take it
    dp[i] = dp[i-1] 

*/

const int mod = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n; cin >> n;
    vi a(n); readv(a);

}