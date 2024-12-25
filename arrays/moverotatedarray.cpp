class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int i=0;
        vector<int>temp (nums.size());
        for(i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
        
        
        
    }
};