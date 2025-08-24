class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int temp = n;
        int rev = 0;
        while(n>0){
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        if (temp ==rev){
            return true;
        }
        else{
            return false;
        }
    }
};

//https://www.geeksforgeeks.org/problems/palindrome0746/1