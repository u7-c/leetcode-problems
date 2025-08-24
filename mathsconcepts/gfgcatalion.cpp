class Solution {
  public:
    // Function to find the nth catalan number.
    int findCatalan(int n) {
        // code here
        
             unsigned long long res = 1; 
             for (int i= 0;  i < n; i++){
                 res =res * (2 * n - i);
                 res = res / (i + 1);
             }
             return res / (n + 1);
        
    }
    
     
};
