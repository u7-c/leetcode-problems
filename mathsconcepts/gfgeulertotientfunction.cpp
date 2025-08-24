#include <cmath> // Not strictly needed for this integer version, but good practice

class Solution {
 public:
  int etf(int n) {
    // 1. Initialize result with n, as per the formula Φ(n) = n * ...
    int result = n; 
    
    // 2. Iterate from p=2 up to the square root of n to find prime factors.
    //    We loop through potential factors 'p'.
    for (int p = 2; p * p <= n; ++p) {
        
        // 3. Check if the current 'p' is a prime factor of the current n.
        if (n % p == 0) {
            
            // 4. A distinct prime factor 'p' has been found.
            //    Apply the formula: result = result * (1 - 1/p).
            //    In integer math, this is the same as: result -= result / p.
            result -= result / p;
            
            // 5. IMPORTANT: Remove all occurrences of this prime factor from n.
            //    This ensures we don't use this prime factor again and it
            //    makes the loop terminate faster.
            while (n % p == 0) {
                n /= p;
            }
        }
    }
    
    // 6. Handle the case where a prime factor greater than the original sqrt(n) remains.
    //    For example, if n was 77, after dividing by 7, n would be 11.
    //    The loop would end, and this 'if' block would handle the factor 11.
    if (n > 1) {
        // Apply the formula for this last remaining prime factor.
        result -= result / n;
    }
    
    // 7. Return the final calculated value.
    return result;
  }
};