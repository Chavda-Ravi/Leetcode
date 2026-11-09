class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return true;
        
        int min_val = nums[n - 1];
        
        for (int i = n - 3; i >= 0; --i) {
            if (nums[i] > min_val) {
                return false;
            }
            min_val = min(min_val, nums[i + 1]);
        }
        
        return true;
    }
};