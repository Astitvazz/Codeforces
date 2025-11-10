#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> C(m + 1); // C[j] = list of set indices that contain j
    vector<bool> covered(m + 1, false);
    int covered_count = 0;

    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        for (int j = 0; j < l; ++j) {
            int element;
            cin >> element;
            C[element].push_back(i);
            if (!covered[element]) {
                covered[element] = true;
                covered_count++;
            }
        }
    }

    // Step 1: Check if a solution is possible at all
    if (covered_count < m) {
        cout << "NO\n";
        return;
    }

    // Step 2: Find all essential sets
    vector<bool> is_essential(n, false);
    int essential_count = 0;
    for (int j = 1; j <= m; ++j) {
        if (C[j].size() == 1) {
            int set_index = C[j][0];
            if (!is_essential[set_index]) {
                is_essential[set_index] = true;
                essential_count++;
            }
        }
    }

    // Step 3: Calculate n'
    int n_prime = n - essential_count;

    // Step 4: Check if n' >= 2.
    // As shown in the derivation, both cases (U_E = U and U_E != U)
    // lead to the same condition for having >= 3 solutions.
    if (n_prime >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}