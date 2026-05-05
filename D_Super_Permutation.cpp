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
    A permutation of numbers [a1,a2,…,an] is called a super-permutation if [b1+1,b2+1,…,bn+1] is also a permutation of length n
    bi=(a1+a2+ … +ai)modn.
*/

// Observations + Proofs
/*
    b1 = a1
    b2 = a2 + a1
    b3 = a3 + a2 + a1


    b_0 = 1
    b_i+1 = b_i + a_i+1 for i = 0 to n-1
        we have to make it a permutation

    b1 = 1 + a1 mod n = x
    b2 = 1 + a1 + a2 mod n = x

    a2 + a3 + a4 mod n != 0

    if a number is odd
        then sum to n-1 will always be divisible by that number
        for example n = 5;
        sum(1..4) mod 5 = 0
        why??
            4 * (5) / 2  = 2 * 5 is the sum and that's divisible by both 4 and 5

        if number is even then
            for example n = 8
            then sum(1..7) mod 8 = 0 ?
                7 * 8 / 2  = 7 * 4 mod 8 != 0


    b3 = 1 + a1 + a2 + a3

    we have to select a2..an such that every subarray starting from initial is giving different value with mod
        a2 mod != a2 + a3 mod != a2 + a3 + a4 ....

    select a even and odd number alternate that way the sum can never be divisible by n
*/

void solve() {
    int n; cin >> n;
    if (n&1 and not (n == 1)) {
        cout << -1 << "\n";
        return;
    }
    cout << n << " ";
    for (int i = 2; i <= n; i++) {
        if (i&1) {
            cout << i - 1 << " ";
        } else {
            cout << n - i + 1 << " ";
        }
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}