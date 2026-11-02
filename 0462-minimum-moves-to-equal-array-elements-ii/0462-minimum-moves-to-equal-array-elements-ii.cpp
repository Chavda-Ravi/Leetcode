class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());

        int x = nums[n/2];
        int res =0;
        for (int i=0;i<n;i++)
        {
            if(x==nums[i]) continue;
            else
            {
              res += std::abs(nums[i] - x);
            }
        }
        return res;

    }
};