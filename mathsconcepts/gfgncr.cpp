class Solution {
  public:
    int nCr(int n, int r) {
        // without long long garbage value hi aayegi
        long long result = 1;//yeh isliye kiya kyuki multiplicative identity hai 
        if ( r > n){//on solving ncr this gives 0 
            return 0;
        }
        if (n == 0 || n == r){
            return 1;
        }
        if( r > n/2){//yeh optimized hai kyuki ncr = nc(n-r) and moreover ofc agar r > n/2 tabhi iterations kam krne ka fayda hai
            r = n-r;
        }
        for(int i = 1 ; i <= r ; i++){ // starting loop from 1 taaki division error na aajaye
            result = result * (n - i + 1) / i;//yeh formula ki cutting krke aaya and r is replaced by iterator
            
        }
        return result;
    }
}; 