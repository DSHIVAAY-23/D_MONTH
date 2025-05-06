#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> sparseTable;

// Build the Sparse Table for range minimum query
void buildSparseTable(const vector<int>& arr) {
    int n = arr.size();
    int k = log2(n) + 1;

    sparseTable.assign(n, vector<int>(k, 0));
    for (int i = 0; i < n; i++) {
        sparseTable[i][0] = arr[i];
    }

    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 0; (i + (1 << j)) <= n; i++) {
            sparseTable[i][j] = min(sparseTable[i][j - 1], sparseTable[i + (1 << (j - 1))][j - 1]);
        }
    }
}

// Query the Sparse Table for minimum in range [l, r]
int rangeMinQuery(int l, int r) {
    int len = r - l + 1;
    int j = log2(len);
    return min(sparseTable[l][j], sparseTable[r - (1 << j) + 1][j]);
}

int main() {
    ios_base::sync_with_stdio(false); // Faster input/output
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    buildSparseTable(arr);

    while (q--) {
        int a, b;
        cin >> a >> b;
        a--, b--; // Convert to 0-based indexing
        cout << rangeMinQuery(a, b) << '\n';
    }

    return 0;
}
