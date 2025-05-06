#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &k,int t,int n,int mid){
    int count = 0;
    for(int i = 0; i < n; i++){
        count += k[i] >= mid/k[i] ;
    }
    return count >= t;
}
int binarySearch(int a[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid overflow
         if check(mid){
         ans = mid ;
         high = mid - 1; }
        else {
            low = mid + 1;
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 5;

    int result = binarySearch(a, n, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
