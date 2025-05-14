/*
A. Find Minimum Operations
time limit per test1 second
memory limit per test256 megabytes
You are given two integers n
 and k
.

In one operation, you can subtract any power of k
 from n
. Formally, in one operation, you can replace n
 by (n−kx)
 for any non-negative integer x
.

Find the minimum number of operations required to make n
 equal to 0
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The only line of each test case contains two integers n
 and k
 (1≤n,k≤109
).

Output
For each test case, output the minimum number of operations on a new line.


*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>  // For pow function

using namespace std;
void minmum_operation(int t){
    while (t--){
long long n, k;
        cin >> n >> k;

        int operations = 0; 

         if (k == 1) {
                cout<<n<<endl; 
            }

            else{
                while(n>0){
                    operations += n%k;
                    n/=k;

                }
             cout << operations << endl;

            }
}
  
}
int main() {
    int t;
    cin >> t; 
    
    minmum_operation(t);

    return 0;
}