
class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long result = 0;
        
        for(long long i = 1; i <= N;i++){
            //starting from 1 because the smallest chess board one can make is 1 X 1
            result += i*i;
        }
        return result;
    }
};  