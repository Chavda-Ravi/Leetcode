class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sl=0;
        int sh=0;
        int n=nums.size();
        for (int i=0;i<k;i++)
        {
            sl +=nums[i];
            sh +=nums[n-1-i];
        }
       
        return abs(sl-sh);
    }
};