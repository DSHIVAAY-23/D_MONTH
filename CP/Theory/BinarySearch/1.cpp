#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;  

        if (a[mid] >= target) {
             ans =  mid;  
             high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans ;  
}

int main() {
    int a[] = { 1, 2, 5, 6, 10, 11,20,31};
    int n = sizeof(a) / sizeof(a[0]);
    int target =10;

    int result1 = binarySearch(a, n, target);
    // int target2 = 11;
    // int result2 = binarySearch(a, n, target2);  // Change target2 to find the element greater than or equal to target2
    
    
     cout << "elements : " << result1 << endl;

   

    return 0;
}
