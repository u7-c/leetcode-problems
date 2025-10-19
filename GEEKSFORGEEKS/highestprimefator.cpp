class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int largestPrime = 1;
        
        while (n % 2 == 0){//edge case
            largestPrime = 2;
            n = n / 2;
        }
        for(int i = 3;i * i<=n;i+=2){
            while(n % i == 0){//while isliye agar tune kabhi khudse kabhi prime factorization ki ho toh
                largestPrime = i;
                n = n / i;
            }
        }
        if (n > 2){//because at the end of the apbove loop it had to be 1 but if it isnt so then we know the theprime 
        // factorization is nt completed by i * 1 so its gonna be the number itself
            largestPrime = n;
        }
        return largestPrime;
    }
};