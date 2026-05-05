#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int seed = stoi(argv[1]);
    mt19937 rng(seed);

    const size_t MAX_BYTES = 256 * 1024;

    default_random_engine generator;
    // uniform_int_distribution<int> distribution(1, 6);

    vector<string> testcases;
    size_t total_bytes = 0;

    const int MAX_SUM = 300000;
    int remaining = MAX_SUM;

    while (remaining > 0) {
        int max_n_allowed = min(remaining, 30000); // safe for 256KB
        uniform_int_distribution<int> dist_n(1, max_n_allowed);
        int n = dist_n(rng);
        // int n = dist(generator);

        stringstream temp;
        temp << n << "\n";
        uniform_int_distribution<int> dist_val(1, 6);
        for (int i = 0; i < n; i++) {
            if (i) temp << " ";
            temp << dist_val(rng);
        }
        temp << "\n";

        string chunk = temp.str();

        // +10 is safe buffer for t line
        if (total_bytes + chunk.size() + 10 > MAX_BYTES)
            break;

        testcases.push_back(chunk);
        total_bytes += chunk.size();
        remaining -= n;
    }

    // Now we know actual t
    cout << testcases.size() << "\n";
    for (auto &tc : testcases)
        cout << tc;
}
