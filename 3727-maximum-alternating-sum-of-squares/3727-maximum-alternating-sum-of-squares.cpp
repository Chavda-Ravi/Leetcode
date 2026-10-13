class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        long long score = 0;
        int m = n / 2;

        for(int i = 0; i < m; i++) {
            score -= nums[i];
        }

        for(int i = m; i < n; i++) {
            score += nums[i];
        }

        return score;
    }
};
