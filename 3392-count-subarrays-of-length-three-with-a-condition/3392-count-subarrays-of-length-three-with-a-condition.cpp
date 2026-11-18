class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=2;
        int res=0;
        while (k<nums.size())
        {
            int sum=0;
            sum = nums[i]+nums[k];
            if(nums[j] == sum*2) res++;
            i++;
            j++;
            k++;
        }
        return res;
    }
};