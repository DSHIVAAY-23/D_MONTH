    

#include <bits/stdc++.h>

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);

        for(int i =0;i<n;i++){
            cin>>a[i];    
        }
      int sum = 0;
      int maxi = INT_MIN;
      for (int i =0;i<n;i++){
          sum += a[i];
          if (sum<0){
            sum =0;
          }
          else{
            maxi = max(maxi,sum);
          }

      }
      cout<<maxi<<endl;
    }
}