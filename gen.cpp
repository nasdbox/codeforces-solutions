#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(int argc, char** argv) {
    int seed = stoi(string(argv[1]));
    srand(seed);

    int n = rand() % int(100) + 2;
    // int k = rand() % int(1) + 1;
    // int k = 2;
    // cout << n << " " << k << "\n";

    default_random_engine generator;
    uniform_int_distribution<ll> distribution(1, 100);

    for (int i = 0; i < n; i++) {
        if (i > 0)
            cout << " ";
        cout << distribution(generator);
    }

    return 0;
}
