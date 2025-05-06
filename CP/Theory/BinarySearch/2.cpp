#include <iostream>

using namespace std;

int binarysearch(int arr[],int n, int target){
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<+high){
        int mid = (low + high )/2;
        if (mid == target) {ans = mid;}
        else if(mid<target){
            low = mid +1;
        }
        else {
            high =mid-1;
        }

    }
    return ans;
}

int main(){
    int arr[] = {2,3,4,5,6,7,8,66};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 6;
    int ans = binarysearch(arr,n,target);
    cout<<ans<<endl;


}