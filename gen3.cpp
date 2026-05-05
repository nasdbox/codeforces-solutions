#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int seed = stoi(argv[1]);
    mt19937 rng(seed);

    const int MAX_SUM = 300000;
    int remaining = MAX_SUM;

    vector<int> tests;

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 6);

    while (remaining > 0) {
        uniform_int_distribution<int> dist(1, remaining);
        int n = dist(rng);
        tests.push_back(n);
        remaining -= n;
    }

    cout << tests.size() << "\n";
    for (int n : tests) {
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            if (i > 0)
                cout << " ";
            cout << distribution(generator);
        }
        cout << "\n";
    }
}
