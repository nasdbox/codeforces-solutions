#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int seed = stoi(string(argv[1]));
    srand(seed);

    int t = rand() % int(100) + 1;
    cout << t << "\n";

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 6);

    // int sm = 0;
    for (int k = 0; k < t; k++) {
        int n = rand() % int(3e5) + 1;
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            if (i > 0)
                cout << " ";
            cout << distribution(generator);
        }
        cout << "\n";
        // sm += n;
    }

    // cerr << "Sum : " << sm << "\n";

    return 0;
}
