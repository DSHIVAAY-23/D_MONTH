#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 

using namespace std;

const int MAX_LIMIT = 1000000;
vector<bool> is_prime(MAX_LIMIT + 1, true);
vector<long long> t_primes;
int spf[MAX_LIMIT];

// Function to precompute primes using Sieve of Eratosthenes
void sieve_of_eratosthenes_spf() {
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers
    spf[1]=1;
    for (int i = 2; i * i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_LIMIT; j += i) {
                is_prime[j] = false;
            }
        }
    }

     for (int i = 2; i * i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            for (int j = i ; j <= MAX_LIMIT; j += i) {
                if(spf[j]==0){
                    spf[j] = i;
                }
                else{
                    continue;
                }
            }
        }
    // for (int i = 2;i<MAX_LIMIT; ++i) {
    //     int ans = 0;
    //     if (is_prime[i]){
    //         ans += 1;
            
    //     }
    //     cout<<ans<<endl;
    // }
    // Storing squares of prime numbers
    for (int i = 2; i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            t_primes.push_back(1LL * i * i); // Store i^2
        }
    }
}
int compute_answer(int N){
    int ans =0;
    for (int i =1;i<N;i++){
    int A = spf[i];
    int  B = spf[N/A];
    if(A != B && is_prime[A] && is_prime[B] ){
        ans++;
    }
}
return ans;
}


int main() {
    sieve_of_eratosthenes(); // Precompute primes and their squares

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        // Check if x is a T-prime
        if (binary_search(t_primes.begin(), t_primes.end(), x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
 