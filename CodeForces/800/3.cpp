/*
⠀
You are given an array a1,a2,…,an
 of positive integers.

You can color some elements of the array red, but there cannot be two adjacent red elements (i.e., for 1≤i≤n−1
, at least one of ai
 and ai+1
 must not be red).

Your score is the maximum value of a red element plus the number of red elements. Find the maximum score you can get.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤1000
) — the given array.

Output
For each test case, output a single integer: the maximum possible score you can get after coloring some elements red according to the statement.
*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>  // For pow function

using namespace std;



void max_colours(int t) {
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
         int even = (n+1)/2,temp = 0;
         int odd = n - even;

       
        int max_even = INT_MIN;
        int max_odd = INT_MIN;
        int max1 = 0;
        for (int i = 0; i < n; i++) {
            cin>>temp;
            if(i&1){
                max_odd = max(max_odd, temp);
            }
            else{
                max_even = max(max_even, temp);
            }

        }
   
        cout << max(max_even+even,max_odd+odd) << endl;
       
    }
}

int main() {
    int t;
    cin >> t;

    max_colours(t);

    return 0;
}