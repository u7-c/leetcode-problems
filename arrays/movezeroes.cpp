class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        for (j=0;j<nums.size();j++){
            if (nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};
// How the Code Works
// i tracks the position where the next non-zero element should go.
// j iterates through every element of the array.
// When nums[j] is non-zero:
// It swaps nums[j] with nums[i].
// Then, i is incremented to move to the next position for the next non-zero element.
// Key Insight: The swap ensures that:

// If nums[i] is already a non-zero number, it stays in the same position because it is swapped with itself.
// Only zeroes get moved to the end of the array by being swapped with non-zero elements.