class Solution {
  public:
    int repeatedSumOfDigits(int N) {
        while (N >= 10) { // repeat until single digit
            int sum = 0;
            while (N > 0) {
                int dig = N % 10;
                sum += dig;
                N = N / 10;
            }
            N = sum; // set N to the sum and repeat
        }
        return N;
    }
};

//https://www.geeksforgeeks.org/problems/repeated-sum-of-digits3955/1