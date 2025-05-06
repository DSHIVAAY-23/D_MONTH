#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);

    // Input the array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    int k;
    cin >> k;
    vector<long long> b(k);
    // Process each query
    for (int i = 0; i < k; ++i) {
        long long l, r;
        cin >> l >> r;

        auto left = lower_bound(a.begin(), a.end(), l);
        auto right = upper_bound(a.begin(), a.end(), r);
        

        b[i] = right - left;
    }
    for(int i = 0; i < k; ++i) {
        cout << b[i] << " ";  // Output the result for each query
    }
    cout << endl;

    return 0;
}
