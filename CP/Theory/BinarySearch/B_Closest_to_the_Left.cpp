#include <iostream>
#include <vector>

using namespace std;

int findClosestToLeft(const vector<int>& a, int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = -1;  // Initialize with -1 to handle "not found" case

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] <= target) {
            ans = mid;   // Update answer to the current mid index
            low = mid + 1;  
        } else {
            high = mid - 1;  // Move to the left half
        }
    }

    return ans + 1;  // Convert to 1-based index
}

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
        int result = findClosestToLeft(a, n, query);

        // If no element is found, print 0
        if (result == 0) {
            cout << "0" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}
