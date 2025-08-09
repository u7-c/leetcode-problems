class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for( int right = 0 ; right < nums.size() ; right++){
            // if (nums[right] == 0){
            //     right++;
            // }
            if(nums[right] != 0){
                swap(nums[right], nums[left]);
                left++;
            }
        }
    }
};

//Basically right p[ointer move krnwa hai 0 thai toh right move krega
//non zero aaya right pe toh right aur left swap aur l++ and r++(it will be in loop) so simple
