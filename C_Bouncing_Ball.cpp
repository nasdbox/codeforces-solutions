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
  first step: greedy
    we need every platform on p + ik
       a[p] should be 1
       if there's no platform there
         either we will insert one with y cost
	 or, remove few first elements to align
	 Greedy will fails

   DP solution
      states : index, (either i will shift one or insert one),
      dp[i][k] = minimum number of seconds till index i such that last operation was k (0, 1)
      ans = min(dp[n][0], dp[n][1])
      transition:
        we can shift it multiple times
        dp[i][k] = min(dp[i-1][k], dp[i-1][2-k]) 
*/

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
}
