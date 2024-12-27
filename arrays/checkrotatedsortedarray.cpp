class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int count=0;
        int n=nums.size();

        for (i=1;i<nums.size();i++){
            if (nums[i-1]>nums[i]){
                count++;
            }
             

        }
        if (nums[n-1]>nums[0]){
                count++;
            }

        return count<=1;
    }
};
//two conditions that previous element should be greater then the current one 
//and same goes with last element should be greater than the first element