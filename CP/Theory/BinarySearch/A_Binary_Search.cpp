#include <iostream>
#include <vector>
#include <algorithm>  // For binary_search function

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        int query;
        cin >> query;

        if (binary_search(a.begin(), a.end(), query)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
